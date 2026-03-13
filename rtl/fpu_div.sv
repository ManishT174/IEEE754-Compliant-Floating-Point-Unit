// fpu_div.sv
module fpu_div
  import fpu_pkg::*;
(
  input  logic [FLEN-1:0]  a_in,
  input  logic [FLEN-1:0]  b_in,
  input  round_mode_t       rnd_mode,
  output logic [FLEN-1:0]  result,
  output fpu_flags_t        flags
);

  fp32_t a, b;
  assign a = a_in;
  assign b = b_in;

  fp_class_t a_cls, b_cls;
  assign a_cls = classify(a);
  assign b_cls = classify(b);

  logic res_sign;
  assign res_sign = a.sign ^ b.sign;

  // ── Mantissa division ──
  // We need 26 quotient bits (24 mantissa + guard + round) + sticky
  logic [MANW:0] a_man, b_man;
  assign a_man = {leading_bit(a), a.man};
  assign b_man = {leading_bit(b), b.man};

  localparam int QUOT_BITS = MANW + 3; // 26 bits for quotient (24 + G + R)

  logic [QUOT_BITS-1:0] quotient;
  logic                 remainder_nonzero;

  // Restoring division (combinational — synthesizable but slow)
  always_comb begin
    logic [MANW+1:0] remainder; // 25 bits
    remainder = '0;
    quotient  = '0;

    // Dividend is a_man (24 bits), divisor is b_man (24 bits)
    // We extract QUOT_BITS bits of quotient
    for (int i = QUOT_BITS - 1; i >= 0; i--) begin
      // Shift remainder left, bring in next dividend bit
      if (i >= QUOT_BITS - (MANW+1))
        remainder = {remainder[MANW:0], a_man[i - (QUOT_BITS - (MANW+1))]};
      else
        remainder = {remainder[MANW:0], 1'b0};

      if (remainder >= {1'b0, b_man}) begin
        remainder = remainder - {1'b0, b_man};
        quotient[i] = 1'b1;
      end else begin
        quotient[i] = 1'b0;
      end
    end
    remainder_nonzero = |remainder;
  end

  // ── Exponent ──
  logic signed [EXPW+2:0] res_exp_wide;
  assign res_exp_wide = $signed({2'b0, a.exp}) - $signed({2'b0, b.exp}) + $signed(BIAS);

  // ── Normalize ──
  logic [MANW:0]  res_man;
  logic           guard, round_bit, sticky;
  logic [EXPW+1:0] res_exp;

  always_comb begin
    if (quotient[QUOT_BITS-1]) begin
      // Already normalized (leading 1 at bit 25)
      res_man   = quotient[QUOT_BITS-1 -: (MANW+1)]; // top 24 bits
      guard     = quotient[1];
      round_bit = quotient[0];
      sticky    = remainder_nonzero;
      res_exp   = res_exp_wide[EXPW+1:0];
    end else begin
      // Shift left by 1
      res_man   = quotient[QUOT_BITS-2 -: (MANW+1)];
      guard     = quotient[0];
      round_bit = remainder_nonzero;  // approximation
      sticky    = 1'b0;
      res_exp   = res_exp_wide[EXPW+1:0] - 1;
    end
  end

  // ── Special cases ──
  logic [FLEN-1:0] special_result;
  fpu_flags_t      special_flags;
  logic            use_special;

  always_comb begin
    use_special    = 1'b0;
    special_result = '0;
    special_flags  = '0;

    if (a_cls.is_nan || b_cls.is_nan) begin
      use_special = 1'b1;
      special_result = QNAN;
      special_flags.invalid = a_cls.is_snan | b_cls.is_snan;
    end
    else if (a_cls.is_inf && b_cls.is_inf) begin
      use_special = 1'b1;
      special_result = QNAN;
      special_flags.invalid = 1'b1;
    end
    else if (a_cls.is_inf) begin
      use_special = 1'b1;
      special_result = {res_sign, 8'hFF, 23'd0};
    end
    else if (b_cls.is_inf) begin
      use_special = 1'b1;
      special_result = {res_sign, 8'd0, 23'd0}; // → ±0
    end
    else if (a_cls.is_zero && b_cls.is_zero) begin
      use_special = 1'b1;
      special_result = QNAN;  // 0/0
      special_flags.invalid = 1'b1;
    end
    else if (b_cls.is_zero) begin
      use_special = 1'b1;
      special_result = {res_sign, 8'hFF, 23'd0}; // x/0 → ±Inf
      special_flags.div_zero = 1'b1;
    end
    else if (a_cls.is_zero) begin
      use_special = 1'b1;
      special_result = {res_sign, 8'd0, 23'd0};
    end
  end

  // ── Rounding ──
  logic [FLEN-1:0] rounded_result;
  fpu_flags_t      rounded_flags;

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

  assign result = use_special ? special_result : rounded_result;
  assign flags  = use_special ? special_flags  : rounded_flags;

endmodule