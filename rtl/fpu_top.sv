// fpu_top.sv
module fpu_top
  import fpu_pkg::*;
(
  input  logic [FLEN-1:0]  operand_a,
  input  logic [FLEN-1:0]  operand_b,
  input  fpu_op_t           op,
  input  round_mode_t       rnd_mode,
  output logic [FLEN-1:0]  result,
  output fpu_flags_t        flags,
  // Compare outputs
  output logic              cmp_lt,
  output logic              cmp_eq,
  output logic              cmp_gt,
  output logic              cmp_unordered,
  // Int output (for f2i)
  output logic [31:0]       int_result
);

  // ── Instantiate all units ──
  logic [FLEN-1:0] add_result, mul_result, div_result, i2f_result;
  fpu_flags_t      add_flags,  mul_flags,  div_flags,  i2f_flags;
  logic [31:0]     f2i_result;
  fpu_flags_t      f2i_flags, cmp_flags;

  fpu_add_sub u_add (
    .a_in(operand_a), .b_in(operand_b),
    .sub(op == OP_SUB), .rnd_mode(rnd_mode),
    .result(add_result), .flags(add_flags)
  );

  fpu_mul u_mul (
    .a_in(operand_a), .b_in(operand_b),
    .rnd_mode(rnd_mode),
    .result(mul_result), .flags(mul_flags)
  );

  fpu_div u_div (
    .a_in(operand_a), .b_in(operand_b),
    .rnd_mode(rnd_mode),
    .result(div_result), .flags(div_flags)
  );

  fpu_int_to_fp u_i2f (
    .int_in(operand_a), .rnd_mode(rnd_mode),
    .result(i2f_result), .flags(i2f_flags)
  );

  fpu_fp_to_int u_f2i (
    .fp_in(operand_a), .rnd_mode(rnd_mode),
    .int_out(f2i_result), .flags(f2i_flags)
  );

  fpu_compare u_cmp (
    .a_in(operand_a), .b_in(operand_b),
    .lt(cmp_lt), .eq(cmp_eq), .gt(cmp_gt),
    .unordered(cmp_unordered), .flags(cmp_flags)
  );

  // ── Output mux ──
  always_comb begin
    result     = '0;
    flags      = '0;
    int_result = '0;

    case (op)
      OP_ADD, OP_SUB: begin result = add_result; flags = add_flags; end
      OP_MUL:         begin result = mul_result; flags = mul_flags; end
      OP_DIV:         begin result = div_result; flags = div_flags; end
      OP_I2F:         begin result = i2f_result; flags = i2f_flags; end
      OP_F2I:         begin int_result = f2i_result; flags = f2i_flags; end
      OP_CMP:         begin flags = cmp_flags; end
      default:        begin result = '0; flags = '0; end
    endcase
  end

endmodule