// fpu_int_to_fp.sv — signed 32-bit int to float
module fpu_int_to_fp
  import fpu_pkg::*;
(
  input  logic [31:0]       int_in,
  input  round_mode_t       rnd_mode,
  output logic [FLEN-1:0]  result,
  output fpu_flags_t        flags
);

  logic sign;
  logic [31:0] magnitude;

  assign sign = int_in[31];
  assign magnitude = sign ? (~int_in + 1) : int_in;

  // Find leading one
  logic [4:0] lz;  // 0..31
  logic all_zero;
  always_comb begin
    lz = '0;
    all_zero = (magnitude == '0);
    for (int i = 31; i >= 0; i--) begin
      if (magnitude[i]) begin
        lz = 31 - i;
        break;
      end
    end
  end

  logic [31:0] shifted;
  assign shifted = magnitude << lz;

  // Exponent = 31 - lz + 127 = 158 - lz
  logic [EXPW+1:0] res_exp;
  assign res_exp = 10'd158 - {5'd0, lz};

  // Mantissa: bits [30:8] (23 bits), guard = [7], round = [6], sticky = |[5:0]
  logic [MANW:0] res_man;
  assign res_man = {1'b1, shifted[30:8]};

  logic guard, round_bit, sticky;
  assign guard     = shifted[7];
  assign round_bit = shifted[6];
  assign sticky    = |shifted[5:0];

  logic [FLEN-1:0] rounded_result;
  fpu_flags_t      rounded_flags;

  fpu_round u_round (
    .sign      (sign),
    .exp_in    (res_exp),
    .man_in    (res_man),
    .guard     (guard),
    .round_bit (round_bit),
    .sticky    (sticky),
    .rnd_mode  (rnd_mode),
    .result    (rounded_result),
    .flags     (rounded_flags)
  );

  assign result = all_zero ? 32'd0 : rounded_result;
  assign flags  = all_zero ? '0    : rounded_flags;

endmodule