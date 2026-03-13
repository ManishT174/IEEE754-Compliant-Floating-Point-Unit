// fpu_round.sv
module fpu_round
  import fpu_pkg::*;
(
  input  logic             sign,
  input  logic [EXPW+1:0]  exp_in,      // widened exponent (10 bits to detect over/underflow)
  input  logic [MANW:0]    man_in,      // 24 bits: {1.mantissa} (pre-rounding)
  input  logic             guard,
  input  logic             round_bit,
  input  logic             sticky,
  input  round_mode_t      rnd_mode,

  output logic [FLEN-1:0]  result,
  output fpu_flags_t       flags
);

  logic round_up;
  logic [MANW:0] man_rounded;  // 24 bits
  logic carry;                 // rounding overflow (1.111...1 + 1)
  logic [EXPW+1:0] exp_adj;
  logic inexact;

  // ── Determine whether to round up ──
  always_comb begin
    inexact = guard | round_bit | sticky;
    case (rnd_mode)
      RND_RNE: round_up = guard & (round_bit | sticky | man_in[0]); // tie→even
      RND_RTZ: round_up = 1'b0;
      RND_RDN: round_up = sign & inexact;   // toward -inf
      RND_RUP: round_up = ~sign & inexact;  // toward +inf
      default: round_up = 1'b0;
    endcase
  end

  // ── Add rounding increment ──
  assign {carry, man_rounded} = man_in + round_up;

  // ── Adjust exponent if rounding caused carry ──
  assign exp_adj = exp_in + carry;

  // ── Assemble result and detect overflow/underflow ──
  always_comb begin
    flags = '0;
    flags.inexact = inexact;

    if (exp_adj >= (2**(EXPW) - 1)) begin
      // Overflow → infinity
      flags.overflow = 1'b1;
      flags.inexact  = 1'b1;
      // Overflow behavior depends on rounding mode
      case (rnd_mode)
        RND_RTZ: result = {sign, {EXPW{1'b1}} - 1'b1, {MANW{1'b1}}}; // max finite
        RND_RDN: result = sign ? {1'b1, 8'hFF, 23'd0} : {1'b0, 8'hFE, {MANW{1'b1}}};
        RND_RUP: result = sign ? {1'b1, 8'hFE, {MANW{1'b1}}} : {1'b0, 8'hFF, 23'd0};
        default: result = {sign, 8'hFF, 23'd0}; // RNE → infinity
      endcase
    end
    // else if (exp_adj <= 0) begin
    //   // Underflow → zero (simplified; full denormal support is more complex)
    //   flags.underflow = inexact;
    //   result = {sign, 8'd0, 23'd0};
    // end
    else if (exp_adj <= 0) begin
      // Underflow handling
      flags.underflow = 1'b1;
      flags.inexact = 1'b1;
      
      if (exp_adj < -23) begin
        // Complete underflow - flush to zero
        result = {sign, 8'd0, 23'd0};
      end else begin
        // Gradual underflow - create denormal
        // Shift mantissa right by (1 - exp_adj) positions
        logic [4:0] denorm_shift;
        logic [24:0] shifted_man;
        logic lost_bits;
        
        denorm_shift = 1 - exp_adj[4:0];
        shifted_man = {1'b0, man_rounded} >> denorm_shift;
        lost_bits = |(man_rounded & ((1 << denorm_shift) - 1));
        
        result = {sign, 8'd0, shifted_man[22:0]};
        flags.inexact = flags.inexact | lost_bits;
      end
    end
    else begin
      result = {sign, exp_adj[EXPW-1:0], man_rounded[MANW-1:0]};
    end
  end

endmodule