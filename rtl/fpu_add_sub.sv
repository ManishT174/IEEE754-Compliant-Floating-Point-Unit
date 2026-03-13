// fpu_add_sub.sv
module fpu_add_sub
  import fpu_pkg::*;
(
  input  logic [FLEN-1:0]  a_in,
  input  logic [FLEN-1:0]  b_in,
  input  logic              sub,        // 0 = add, 1 = subtract
  input  round_mode_t       rnd_mode,
  output logic [FLEN-1:0]  result,
  output fpu_flags_t        flags
);

  // ── Unpack ──
  fp32_t a, b;
  assign a = a_in;
  assign b = b_in;

  fp_class_t a_cls, b_cls;
  assign a_cls = classify(a);
  assign b_cls = classify(b);

  // Effective sign of B after considering subtraction
  logic b_sign_eff;
  assign b_sign_eff = b.sign ^ sub;

  // Determine effective operation: 0 = add magnitudes, 1 = subtract magnitudes
  logic eff_sub;
  assign eff_sub = a.sign ^ b_sign_eff;

  // ── Extended mantissa (1 + 23 = 24 bits) ──
  logic [MANW:0] a_man, b_man; // 24 bits each
  assign a_man = {leading_bit(a), a.man};
  assign b_man = {leading_bit(b), b.man};  // b is using original struct, not sign-flipped

  // ── Exponent comparison & swap so A >= B in magnitude ──
  logic [EXPW+1:0] exp_a, exp_b, exp_diff;
  assign exp_a = {2'b0, a.exp};
  assign exp_b = {2'b0, b.exp};

  logic swap;
  assign swap = (exp_b > exp_a) || ((exp_b == exp_a) && (b_man > a_man));

  logic             large_sign, small_sign;
  logic [EXPW+1:0]  large_exp;
  logic [MANW:0]    large_man, small_man;

  always_comb begin
    if (swap) begin
      large_sign = b_sign_eff;
      small_sign = a.sign;
      large_exp  = exp_b;
      large_man  = b_man;
      small_man  = a_man;
      exp_diff   = exp_b - exp_a;
    end else begin
      large_sign = a.sign;
      small_sign = b_sign_eff;
      large_exp  = exp_a;
      large_man  = a_man;
      small_man  = b_man;
      exp_diff   = exp_a - exp_b;
    end
  end

  // ── Alignment shift (with guard, round, sticky) ──
  // We work with 27 bits: [24-bit mantissa][Guard][Round][Sticky]
  localparam int EXTW = MANW + 1 + 3; // 24 + 3 = 27
  logic [EXTW-1:0] large_ext, small_ext;

  logic sticky_bits;

  logic [EXTW-1:0] pre_shift_val;
  logic [EXTW-1:0] sticky_mask;

  // Replace lines 72-93 with cleaner implementation:
  always_comb begin
    large_ext = {large_man, 3'b000};

    if (exp_diff == 0) begin
      small_ext   = {small_man, 3'b000};
      sticky_bits = 1'b0;
    end
    else if (exp_diff >= EXTW) begin
      small_ext   = '0;
      sticky_bits = |small_man;
    end
    else begin
      // Calculate sticky before shift
      pre_shift_val = {small_man, 3'b000};
      sticky_mask   = (1 << exp_diff) - 1;
      sticky_bits   = |(pre_shift_val & sticky_mask);
      
      small_ext     = pre_shift_val >> exp_diff;
      small_ext[0]  = small_ext[0] | sticky_bits;
    end
  end

  // ── Add or subtract ──
  logic [EXTW:0] sum; // 28 bits to catch carry

  always_comb begin
    if (eff_sub)
      sum = {1'b0, large_ext} - {1'b0, small_ext};
    else
      sum = {1'b0, large_ext} + {1'b0, small_ext};
  end

  // ── Normalize ──
  // Find leading one position in sum[EXTW:0]
  logic [$clog2(EXTW+1):0] lz_count;
  logic lz_all_zero;

  // Simplified normalization logic
  logic             res_sign;
  logic [EXPW+1:0]  res_exp;
  logic [MANW:0]    res_man;   // 24 bits (1.23)
  logic             guard, round_bit, sticky;

  always_comb begin
    res_sign = large_sign;

    if (sum[EXTW]) begin
      // Carry out: shift right by 1
      res_man   = sum[EXTW:3+1];         // top 24 bits (skip carry position → actually take [27:4])
      guard     = sum[3];
      round_bit = sum[2];
      sticky    = sum[1] | sum[0];
      res_exp   = large_exp + 1;
    end
    else begin
      // Need to find leading 1 and shift left
      // Count leading zeros in sum[EXTW-1:0] (27 bits)
      integer lz;
      lz = 0;
      for (int i = EXTW-1; i >= 0; i--) begin
        if (sum[i]) break;
        lz = lz + 1;
      end

      if (lz == 0) begin
        // Already normalized
        res_man   = sum[EXTW-1:3];  // bits [26:3]
        guard     = sum[2];
        round_bit = sum[1];
        sticky    = sum[0];
        res_exp   = large_exp;
      end
      else begin
        logic [EXTW:0] shifted_sum;
        shifted_sum = sum << lz;
        res_man     = shifted_sum[EXTW-1:3];
        guard       = shifted_sum[2];
        round_bit   = shifted_sum[1];
        sticky      = shifted_sum[0];
        res_exp     = large_exp - lz;
      end
    end
  end

  // ── Special case handling ──
  logic [FLEN-1:0] special_result;
  fpu_flags_t      special_flags;
  logic            use_special;

  always_comb begin
    use_special    = 1'b0;
    special_result = '0;
    special_flags  = '0;

    // NaN input → quiet NaN, invalid if signaling
    if (a_cls.is_nan || b_cls.is_nan) begin
      use_special = 1'b1;
      special_result = QNAN;
      special_flags.invalid = a_cls.is_snan | b_cls.is_snan;
    end
    // Inf + Inf (same sign) → Inf
    // Inf - Inf (opposite effective sign) → NaN (invalid)
    else if (a_cls.is_inf || b_cls.is_inf) begin
      use_special = 1'b1;
      if (a_cls.is_inf && b_cls.is_inf) begin
        if (eff_sub) begin
          special_result = QNAN;  // Inf - Inf
          special_flags.invalid = 1'b1;
        end else begin
          special_result = {a.sign, 8'hFF, 23'd0};
        end
      end
      else if (a_cls.is_inf)
        special_result = {a.sign, 8'hFF, 23'd0};
      else
        special_result = {b_sign_eff, 8'hFF, 23'd0};
    end
    // Zero handling
    else if (a_cls.is_zero && b_cls.is_zero) begin
      use_special = 1'b1;
      if (a.sign == b_sign_eff)
        special_result = {a.sign, 8'd0, 23'd0};
      else
        special_result = {(rnd_mode == RND_RDN), 8'd0, 23'd0}; // -0 only in RDN mode
    end
    // One operand zero → return the other
    else if (a_cls.is_zero) begin
      use_special = 1'b1;
      special_result = {b_sign_eff, b.exp, b.man};
    end
    else if (b_cls.is_zero) begin
      use_special = 1'b1;
      special_result = a_in;
    end
  end

  // ── Rounding (for normal path) ──
  logic [FLEN-1:0]  rounded_result;
  fpu_flags_t       rounded_flags;

  fpu_round u_round (
    .sign      (res_sign),
    .exp_in    (res_exp),
    .man_in    (res_man),
    .guard     (guard),
    .round_bit (round_bit),
    .sticky    (sticky),
    .rnd_mode  (rnd_mode),
    .result    (rounded_result),
    .flags     (rounded_flags)
  );

  // ── Check if subtraction result is zero ──
  logic result_is_zero;
  assign result_is_zero = eff_sub && (sum == '0);

  // ── Output mux ──
  always_comb begin
    if (use_special) begin
      result = special_result;
      flags  = special_flags;
    end
    else if (result_is_zero) begin
      result = {(rnd_mode == RND_RDN), 8'd0, 23'd0};
      flags  = '0;
    end
    else begin
      result = rounded_result;
      flags  = rounded_flags;
    end
  end

endmodule