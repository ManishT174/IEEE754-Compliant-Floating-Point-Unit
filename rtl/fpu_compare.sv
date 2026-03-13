// fpu_compare.sv
module fpu_compare
  import fpu_pkg::*;
(
  input  logic [FLEN-1:0]  a_in,
  input  logic [FLEN-1:0]  b_in,
  output logic              lt,    // a < b
  output logic              eq,    // a == b
  output logic              gt,    // a > b
  output logic              unordered,
  output fpu_flags_t        flags
);

  fp32_t a, b;
  assign a = a_in;
  assign b = b_in;

  fp_class_t a_cls, b_cls;
  assign a_cls = classify(a);
  assign b_cls = classify(b);

  logic a_neg, b_neg;
  logic a_mag_lt, a_mag_eq;

  always_comb begin
    lt = 1'b0; eq = 1'b0; gt = 1'b0;
    unordered = 1'b0;
    flags = '0;

    if (a_cls.is_nan || b_cls.is_nan) begin
      unordered = 1'b1;
      flags.invalid = a_cls.is_snan | b_cls.is_snan;
    end
    else begin
      // Both +0 and -0 are equal
      if (a_cls.is_zero && b_cls.is_zero) begin
        eq = 1'b1;
      end
      else begin
        // Compare as sign-magnitude: treat as int but handle signs
        a_neg = a.sign;
        b_neg = b.sign;

        if (a_neg != b_neg) begin
          lt = a_neg;  // negative < positive
          gt = b_neg;
        end
        else begin
          // Same sign — compare magnitude (exp then mantissa)
          a_mag_lt = (a.exp < b.exp) || ((a.exp == b.exp) && (a.man < b.man));
          a_mag_eq = (a.exp == b.exp) && (a.man == b.man);

          if (a_mag_eq) eq = 1'b1;
          else if (a_neg) begin lt = ~a_mag_lt; gt = a_mag_lt; end // negative: larger magnitude = smaller value
          else            begin lt = a_mag_lt;  gt = ~a_mag_lt; end
        end
      end
    end
  end

endmodule