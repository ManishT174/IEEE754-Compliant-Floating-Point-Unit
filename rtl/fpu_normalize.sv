// =============================================================================
// fpu_normalize.sv
// IEEE 754 Single-Precision Normalization Unit
// =============================================================================
// This module takes a raw (potentially unnormalized) floating-point result
// and normalizes it so the mantissa has the form 1.xxxx (implicit leading 1).
//
// It handles:
//   - Left-shift normalization (after subtraction, when leading bits cancel)
//   - Right-shift normalization (after addition carry-out)
//   - Denormal results (when exponent underflows to zero)
//   - Zero results
//   - Guard/Round/Sticky bit extraction for downstream rounding
//
// Interface:
//   Input:  sign, wide exponent, extended mantissa (with extra precision bits)
//   Output: normalized sign, exponent, 24-bit mantissa, G/R/S bits, status
// =============================================================================

module fpu_normalize
  import fpu_pkg::*;
#(
  // Width of the input mantissa including extra precision bits
  // For add/sub: 28 bits (1 carry + 24 mantissa + 3 GRS)
  // For mul:     48 bits (24 × 24 product)
  // For div:     27 bits (24 quotient + 3 extra)
  parameter int MANT_IN_W = 28
)(
  // ── Inputs ──
  input  logic                      sign_in,
  input  logic signed [EXPW+2:0]    exp_in,        // signed 11-bit exponent (extra headroom)
  input  logic [MANT_IN_W-1:0]      mant_in,       // extended mantissa
  input  logic                      sticky_in,      // pre-collected sticky from alignment

  // ── Outputs ──
  output logic                      sign_out,
  output logic [EXPW+1:0]           exp_out,        // 10-bit unsigned exponent for rounding stage
  output logic [MANW:0]             mant_out,       // 24 bits: {1, 23-bit fraction}
  output logic                      guard_out,
  output logic                      round_out,
  output logic                      sticky_out,

  // ── Status ──
  output logic                      is_zero,        // result is ±0
  output logic                      is_denorm,      // result is denormalized
  output logic                      exp_overflow     // exponent >= 255 (infinity)
);

  // ═══════════════════════════════════════════════════════════════════════════
  // Leading Zero Counter
  // ═══════════════════════════════════════════════════════════════════════════
  // Find the position of the most-significant '1' bit in the input mantissa.
  // This determines how many positions we need to shift left to normalize.

  logic [$clog2(MANT_IN_W):0] lzc;
  logic                        mant_all_zero;

  always_comb begin
    lzc           = '0;
    mant_all_zero = (mant_in == '0);

    if (!mant_all_zero) begin
      for (int i = MANT_IN_W - 1; i >= 0; i--) begin
        if (mant_in[i]) begin
          lzc = MANT_IN_W - 1 - i;
          break;
        end
      end
    end else begin
      lzc = MANT_IN_W[$clog2(MANT_IN_W):0];
    end
  end

  // ═══════════════════════════════════════════════════════════════════════════
  // Normalization Logic
  // ═══════════════════════════════════════════════════════════════════════════
  //
  // Three scenarios:
  //
  // 1) CARRY-OUT (mant_in MSB is set above the normal position)
  //    → Shift RIGHT by 1, increment exponent
  //
  // 2) NORMAL (leading 1 is in the expected position)
  //    → No shift needed
  //
  // 3) CANCELLATION (leading 1 is below the expected position)
  //    → Shift LEFT by (lzc - expected_lzc), decrement exponent
  //    → If exponent goes to 0 or below, produce denormal or zero
  //
  // The "expected" MSB position depends on the source operation. We use a
  // generic approach: we always normalize so that mant_shifted[MANT_IN_W-2]
  // is the implicit '1' bit (i.e., we treat bit MANT_IN_W-1 as the carry bit).

  // Position where the leading 1 should be after normalization
  localparam int NORM_BIT = MANT_IN_W - 2; // e.g., bit 26 for 28-bit input

  logic [MANT_IN_W-1:0]     mant_shifted;
  logic signed [EXPW+2:0]   exp_adjusted;
  logic                      has_carry;

  always_comb begin
    has_carry = mant_in[MANT_IN_W-1]; // MSB set = carry out from addition

    if (mant_all_zero) begin
      // ── Zero result ──
      mant_shifted = '0;
      exp_adjusted = '0;
    end
    else if (has_carry) begin
      // ── Carry-out: shift right by 1 ──
      // The carry bit is at [MANT_IN_W-1], shift right to put leading 1 at [NORM_BIT]
      mant_shifted = mant_in >> 1;
      // Preserve the bit shifted out into sticky
      exp_adjusted = exp_in + 1;
    end
    else if (lzc == 0) begin
      // ── Leading 1 is already at [MANT_IN_W-2] = NORM_BIT ──
      mant_shifted = mant_in;
      exp_adjusted = exp_in;
    end
    else begin
      // ── Cancellation: shift left ──
      // But we must not shift the exponent below 1 (minimum normal exponent).
      // If we would, we clamp and produce a denormal.
      logic signed [EXPW+2:0] max_shift;
      max_shift = exp_in - 1; // shift that would bring exponent to 1

      if ($signed({{($clog2(MANT_IN_W)+1-EXPW-3){1'b0}}, lzc}) <= max_shift) begin
        // Normal case: enough exponent headroom
        mant_shifted = mant_in << lzc;
        exp_adjusted = exp_in - $signed({{(EXPW+3-$clog2(MANT_IN_W)-1){1'b0}}, lzc});
      end
      else begin
        // Denormal: shift only as far as exponent allows
        if (max_shift > 0) begin
          mant_shifted = mant_in << max_shift[$clog2(MANT_IN_W):0];
        end else begin
          mant_shifted = mant_in;
        end
        exp_adjusted = 0; // denormal exponent
      end
    end
  end

  // ═══════════════════════════════════════════════════════════════════════════
  // Extract mantissa, G, R, S from shifted result
  // ═══════════════════════════════════════════════════════════════════════════
  //
  // After normalization, the bit layout of mant_shifted is:
  //   [NORM_BIT]     = implicit 1 (or 0 for denormals)
  //   [NORM_BIT-1 : NORM_BIT-MANW+1] = 22 fraction bits  (we need 23 fraction bits from NORM_BIT-1 down)
  //   Actually: mant_out = mant_shifted[NORM_BIT : NORM_BIT-MANW] (24 bits total)
  //
  // Layout (for MANT_IN_W=28, NORM_BIT=26, MANW=23):
  //   mant_out  = [26:3]   → 24 bits (1.23)
  //   guard     = [2]
  //   round     = [1]
  //   sticky    = [0] | sticky_in | (carry shifted-out bit)

  localparam int G_POS = NORM_BIT - MANW;       // guard bit position
  localparam int R_POS = G_POS - 1;             // round bit position

  logic carry_sticky; // bit lost during right-shift for carry

  always_comb begin
    sign_out = sign_in;

    // Extract 24-bit mantissa (implicit 1 + 23 fraction bits)
    if (NORM_BIT >= MANW) begin
      mant_out = mant_shifted[NORM_BIT -: (MANW + 1)];
    end else begin
      // Shouldn't happen with proper parameterization, but safe fallback
      mant_out = mant_shifted[MANT_IN_W-2:0];
    end

    // Guard bit
    if (G_POS >= 0)
      guard_out = mant_shifted[G_POS];
    else
      guard_out = 1'b0;

    // Round bit
    if (R_POS >= 0)
      round_out = mant_shifted[R_POS];
    else
      round_out = 1'b0;

    // Sticky bit: OR of all bits below round position, plus external sticky
    carry_sticky = has_carry ? mant_in[0] : 1'b0;

    if (R_POS > 0)
      sticky_out = |mant_shifted[R_POS-1:0] | sticky_in | carry_sticky;
    else
      sticky_out = sticky_in | carry_sticky;

    // ── Exponent output ──
    // Clamp to unsigned range for the rounding stage
    if (exp_adjusted < 0) begin
      exp_out = '0;
    end else begin
      exp_out = exp_adjusted[EXPW+1:0];
    end

    // ── Status flags ──
    is_zero      = mant_all_zero && (sticky_in == 1'b0);
    is_denorm    = (exp_adjusted <= 0) && !mant_all_zero;
    exp_overflow = (exp_adjusted >= $signed({1'b0, {EXPW{1'b1}}})); // >= 255
  end

endmodule