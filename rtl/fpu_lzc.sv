// fpu_lzc.sv  — Leading Zero Count for a 26-bit input (1 + 23 + 2 extra)
module fpu_lzc #(
  parameter int WIDTH = 26
)(
  input  logic [WIDTH-1:0]        data,
  output logic [$clog2(WIDTH):0]  count,  // can be 0..WIDTH
  output logic                    all_zero
);

  always_comb begin
    count    = '0;
    all_zero = (data == '0);
    if (!all_zero) begin
      for (int i = WIDTH-1; i >= 0; i--) begin
        if (data[i]) begin
          count = WIDTH - 1 - i;
          break;
        end
      end
    end else begin
      count = WIDTH;
    end
  end

endmodule