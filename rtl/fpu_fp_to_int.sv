// fpu_fp_to_int.sv — float to signed 32-bit int
module fpu_fp_to_int
  import fpu_pkg::*;
(
  input  logic [FLEN-1:0]  fp_in,
  input  round_mode_t       rnd_mode,
  output logic [31:0]       int_out,
  output fpu_flags_t        flags
);

  fp32_t f;
  assign f = fp_in;
  fp_class_t f_cls;
  assign f_cls = classify(f);

  logic [MANW:0] man;
  assign man = {leading_bit(f), f.man};

  // Unbiased exponent
  logic signed [8:0] unbiased_exp;
  assign unbiased_exp = $signed({1'b0, f.exp}) - $signed(9'd127);

  logic [31:0] mag;
  logic round_needed;
  logic [55:0] wide;  // plenty of room
  logic [MANW:0] int_part;
  logic [MANW:0] frac_mask;

  always_comb begin
    flags = '0;

    if (f_cls.is_nan) begin
      // NaN → INT_MAX (common convention), set invalid
      int_out = 32'h7FFF_FFFF;
      flags.invalid = 1'b1;
    end
    else if (f_cls.is_inf || unbiased_exp >= 31) begin
      // Overflow
      int_out = f.sign ? 32'h8000_0000 : 32'h7FFF_FFFF;
      flags.invalid = 1'b1;
    end
    else if (f_cls.is_zero || unbiased_exp < 0) begin
      int_out = 32'd0;
      flags.inexact = ~f_cls.is_zero;
    end
    else begin
      // Shift mantissa to integer position
      // man is 1.fraction, unbiased_exp tells us where the binary point is
       
      wide = {man, 32'd0}; // 56 bits: man at [55:32]

      // Shift so binary point is at bit 32
      // Integer part = wide >> (55 - MANW - unbiased_exp) ... simplified:
      if (unbiased_exp >= MANW) begin
        // All mantissa bits are integer; shift left
        mag = man << (unbiased_exp - MANW);
        round_needed = 1'b0;
      end else begin
        // Some bits are fractional
        
        int shift_right;
        shift_right = MANW - unbiased_exp;
        mag = man >> shift_right;
        // Check for lost bits (inexact)
        
        frac_mask = (1 << shift_right) - 1;
        round_needed = |(man & frac_mask);
      end

      int_out = f.sign ? (~mag + 1) : mag;
      flags.inexact = round_needed;
    end
  end

endmodule