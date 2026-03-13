// fpu_mul.sv
module fpu_mul
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

  // ── Sign ──
  logic res_sign;
  assign res_sign = a.sign ^ b.sign;

  // ── Mantissa multiplication ──
  logic [MANW:0] a_man, b_man;
  assign a_man = {leading_bit(a), a.man};  // 24 bits
  assign b_man = {leading_bit(b), b.man};

  logic [2*(MANW+1)-1:0] prod;  // 48 bits
  assign prod = a_man * b_man;

  // ── Exponent ──
  logic signed [EXPW+2:0] res_exp_wide;  // signed, extra bits for over/underflow
  assign res_exp_wide = $signed({2'b0, a.exp}) + $signed({2'b0, b.exp}) - $signed(BIAS);

  // ── Normalize ──
  // prod[47] is 1 if product ≥ 2.0 (need right shift by 1)
  logic [MANW:0]   res_man;
  logic             guard, round_bit, sticky;
  logic [EXPW+1:0]  res_exp;

  always_comb begin
    if (prod[2*(MANW+1)-1]) begin
      // Product is 1x.xxx...  (bit 47 = 1) → shift right 1
      res_man   = prod[2*(MANW+1)-1 -: (MANW+1)]; // bits [47:24]
      guard     = prod[MANW-1];  // bit 22
      round_bit = prod[MANW-2];  // bit 21
      sticky    = |prod[MANW-3:0]; // bits [20:0]
      res_exp   = res_exp_wide[EXPW+1:0] + 1;
    end else begin
      // Product is 01.xxx... (bit 47 = 0, bit 46 = 1)
      res_man   = prod[2*(MANW+1)-2 -: (MANW+1)]; // bits [46:23]
      guard     = prod[MANW-2];  // bit 21 (one position lower)
      round_bit = prod[MANW-3];  // bit 20
      sticky    = |prod[MANW-4:0]; // bits [19:0]
      res_exp   = res_exp_wide[EXPW+1:0];
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
    else if (a_cls.is_inf || b_cls.is_inf) begin
      use_special = 1'b1;
      if ((a_cls.is_inf && b_cls.is_zero) || (b_cls.is_inf && a_cls.is_zero)) begin
        special_result = QNAN;  // 0 × Inf = NaN
        special_flags.invalid = 1'b1;
      end else begin
        special_result = {res_sign, 8'hFF, 23'd0};
      end
    end
    else if (a_cls.is_zero || b_cls.is_zero) begin
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