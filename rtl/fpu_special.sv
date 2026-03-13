// fpu_special.sv
module fpu_special
  import fpu_pkg::*;
(
  input  fp32_t     a, b,
  output fp_class_t a_class, b_class
);

  assign a_class = classify(a);
  assign b_class = classify(b);

endmodule