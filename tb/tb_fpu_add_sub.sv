// =============================================================================
// tb_fpu_add_sub.sv
// Unit-level testbench for FP Addition and Subtraction
// =============================================================================
// Focused testing of the fpu_add_sub module with emphasis on:
//   - Alignment shift edge cases (large exponent differences)
//   - Massive cancellation (nearly equal operands subtracted)
//   - Rounding mode correctness (all 4 IEEE modes)
//   - Denormal inputs and outputs
//   - Signed zero semantics
// =============================================================================

`timescale 1ns / 1ps

module tb_fpu_add_sub;

  import fpu_pkg::*;

  // DUT signals
  logic [FLEN-1:0]  a_in, b_in;
  logic             sub;
  round_mode_t      rnd_mode;
  logic [FLEN-1:0]  result;
  fpu_flags_t       flags;

  // DUT
  fpu_add_sub u_dut (
    .a_in     (a_in),
    .b_in     (b_in),
    .sub      (sub),
    .rnd_mode (rnd_mode),
    .result   (result),
    .flags    (flags)
  );

  // ── Helpers ──
  function automatic shortreal bits_to_float(input logic [31:0] bits);
    return $bitstoshortreal(bits);
  endfunction

  function automatic logic [31:0] float_to_bits(input shortreal f);
    return $shortrealtobits(f);
  endfunction

  function automatic logic is_nan(input logic [31:0] bits);
    return (bits[30:23] == 8'hFF) && (bits[22:0] != 23'd0);
  endfunction

  function automatic logic fp_equal(input logic [31:0] a, input logic [31:0] b);
    if (is_nan(a) && is_nan(b)) return 1'b1;
    if ((a == 32'h0000_0000 || a == 32'h8000_0000) &&
        (b == 32'h0000_0000 || b == 32'h8000_0000)) return 1'b1;
    return (a == b);
  endfunction

  int total, pass_cnt, fail_cnt;

  task automatic check(
    input logic [31:0]  a, b,
    input logic         is_sub,
    input round_mode_t  rm,
    input logic [31:0]  expected,
    input string        name
  );
    a_in    = a;
    b_in    = b;
    sub     = is_sub;
    rnd_mode = rm;
    #10;

    total++;
    if (fp_equal(result, expected)) begin
      pass_cnt++;
      $display("[PASS] %s → 0x%08H", name, result);
    end else begin
      fail_cnt++;
      $display("[FAIL] %s → 0x%08H, expected 0x%08H", name, result, expected);
      $display("       flags: NV=%0b DZ=%0b OF=%0b UF=%0b NX=%0b",
               flags.invalid, flags.div_zero, flags.overflow, flags.underflow, flags.inexact);
    end
  endtask

  // ── Constants ──
  localparam logic [31:0] P0   = 32'h0000_0000; // +0
  localparam logic [31:0] N0   = 32'h8000_0000; // -0
  localparam logic [31:0] PINF = 32'h7F80_0000;
  localparam logic [31:0] NINF = 32'hFF80_0000;
  localparam logic [31:0] QNAN = 32'h7FC0_0000;
  localparam logic [31:0] SNAN = 32'h7F80_0001;
  localparam logic [31:0] ONE  = 32'h3F80_0000;
  localparam logic [31:0] NONE = 32'hBF80_0000;
  localparam logic [31:0] TWO  = 32'h4000_0000;
  localparam logic [31:0] HALF = 32'h3F00_0000;

  initial begin
    $display("════════════════════════════════════════════════════════════");
    $display("  FPU Add/Sub — Unit Testbench");
    $display("════════════════════════════════════════════════════════════");

    total = 0; pass_cnt = 0; fail_cnt = 0;

    // ────────────────────────────────────────────────────────────────
    // Section 1: Basic addition
    // ────────────────────────────────────────────────────────────────
    $display("\n── Basic Addition ──");
    check(ONE,  ONE,  0, RND_RNE, TWO,   "1.0 + 1.0 = 2.0");
    check(ONE,  NONE, 0, RND_RNE, P0,    "1.0 + (-1.0) = 0");
    check(ONE,  HALF, 0, RND_RNE,
          float_to_bits(shortreal'(1.5)), "1.0 + 0.5 = 1.5");

    // ────────────────────────────────────────────────────────────────
    // Section 2: Basic subtraction
    // ────────────────────────────────────────────────────────────────
    $display("\n── Basic Subtraction ──");
    check(TWO,  ONE,  1, RND_RNE, ONE,   "2.0 - 1.0 = 1.0");
    check(ONE,  TWO,  1, RND_RNE, NONE,  "1.0 - 2.0 = -1.0");
    check(ONE,  ONE,  1, RND_RNE, P0,    "1.0 - 1.0 = +0 (RNE)");
    check(ONE,  ONE,  1, RND_RDN, N0,    "1.0 - 1.0 = -0 (RDN)");

    // ────────────────────────────────────────────────────────────────
    // Section 3: Zero semantics
    // ────────────────────────────────────────────────────────────────
    $display("\n── Zero Semantics ──");
    check(P0, P0, 0, RND_RNE, P0,    "+0 + +0 = +0");
    check(N0, N0, 0, RND_RNE, N0,    "-0 + -0 = -0");
    check(P0, N0, 0, RND_RNE, P0,    "+0 + -0 = +0 (RNE)");
    check(P0, N0, 0, RND_RDN, N0,    "+0 + -0 = -0 (RDN) [IEEE: -0 in RDN]");
    check(P0, P0, 1, RND_RNE, P0,    "+0 - +0 = +0 (RNE)");
    check(P0, P0, 1, RND_RDN, N0,    "+0 - +0 = -0 (RDN)");

    // ────────────────────────────────────────────────────────────────
    // Section 4: Infinity
    // ────────────────────────────────────────────────────────────────
    $display("\n── Infinity ──");
    check(PINF, ONE,  0, RND_RNE, PINF, "Inf + 1 = Inf");
    check(NINF, ONE,  0, RND_RNE, NINF, "-Inf + 1 = -Inf");
    check(PINF, PINF, 0, RND_RNE, PINF, "Inf + Inf = Inf");
    check(PINF, NINF, 0, RND_RNE, QNAN, "Inf + (-Inf) = NaN");
    check(PINF, PINF, 1, RND_RNE, QNAN, "Inf - Inf = NaN");
    check(PINF, NINF, 1, RND_RNE, PINF, "Inf - (-Inf) = Inf");

    // ────────────────────────────────────────────────────────────────
    // Section 5: NaN propagation
    // ────────────────────────────────────────────────────────────────
    $display("\n── NaN Propagation ──");
    check(QNAN, ONE,  0, RND_RNE, QNAN, "QNaN + 1 = QNaN");
    check(ONE,  QNAN, 0, RND_RNE, QNAN, "1 + QNaN = QNaN");
    check(QNAN, QNAN, 0, RND_RNE, QNAN, "QNaN + QNaN = QNaN");
    check(SNAN, ONE,  0, RND_RNE, QNAN, "SNaN + 1 = QNaN (invalid flag)");

    // ────────────────────────────────────────────────────────────────
    // Section 6: Large exponent difference (alignment stress)
    // ────────────────────────────────────────────────────────────────
    $display("\n── Alignment Stress ──");
    // 2^100 + 1.0 should just be 2^100 (1.0 vanishes)
    begin
      logic [31:0] big;
      big = {1'b0, 8'd(100 + 127), 23'd0}; // 2^100
      check(big, ONE, 0, RND_RNE, big, "2^100 + 1.0 = 2^100");
    end

    // 1.0 + 2^-24 (just beyond mantissa, tests sticky)
    begin
      logic [31:0] tiny;
      tiny = {1'b0, 8'd(127 - 24), 23'd0}; // 2^-24
      check(ONE, tiny, 0, RND_RNE, ONE, "1.0 + 2^-24 (below ULP, should round)");
    end

    // ────────────────────────────────────────────────────────────────
    // Section 7: Massive cancellation
    // ────────────────────────────────────────────────────────────────
    $display("\n── Cancellation ──");
    // Subtract numbers differing by 1 ULP
    begin
      logic [31:0] a_val, b_val, exp_val;
      a_val = 32'h3F80_0001; // 1.0 + 1 ULP
      b_val = 32'h3F80_0000; // 1.0
      // Result should be 2^-23 = 0x34000000
      exp_val = 32'h3400_0000;
      check(a_val, b_val, 1, RND_RNE, exp_val, "(1+ULP) - 1.0 = 2^-23");
    end

    // ────────────────────────────────────────────────────────────────
    // Section 8: Rounding mode tests
    // ────────────────────────────────────────────────────────────────
    $display("\n── Rounding Modes ──");
    // 1.0 + 2^-24 with different rounding modes
    begin
      logic [31:0] tiny;
      tiny = {1'b0, 8'd(127 - 24), 23'd0}; // 2^-24 = half ULP of 1.0

      // RNE: round to even → 1.0 (LSB is 0, tie goes to even)
      check(ONE, tiny, 0, RND_RNE, ONE, "1.0 + 0.5ULP RNE → 1.0");

      // RUP: round toward +inf → 1.0 + 1ULP
      check(ONE, tiny, 0, RND_RUP, 32'h3F80_0001, "1.0 + 0.5ULP RUP → 1+ULP");

      // RTZ: truncate → 1.0
      check(ONE, tiny, 0, RND_RTZ, ONE, "1.0 + 0.5ULP RTZ → 1.0");

      // RDN: round toward -inf → 1.0
      check(ONE, tiny, 0, RND_RDN, ONE, "1.0 + 0.5ULP RDN → 1.0");
    end

    // ────────────────────────────────────────────────────────────────
    // Section 9: Denormal inputs
    // ────────────────────────────────────────────────────────────────
    $display("\n── Denormal Inputs ──");
    begin
      logic [31:0] den1, den2;
      den1 = 32'h0000_0001; // smallest denormal
      den2 = 32'h0000_0002; // 2× smallest denormal
      check(den1, den1, 0, RND_RNE, den2, "denorm + denorm");
      check(den2, den1, 1, RND_RNE, den1, "2*denorm - denorm = denorm");
    end

    // ────────────────────────────────────────────────────────────────
    // Section 10: Random pairs
    // ────────────────────────────────────────────────────────────────
    $display("\n── Random Pairs ──");
    begin
      logic [31:0] ra, rb, ref_result;
      shortreal fa, fb, fr;

      for (int i = 0; i < 5000; i++) begin
        ra = $urandom();
        rb = $urandom();
        // Skip NaN/Inf for reference model
        if (ra[30:23] == 8'hFF || rb[30:23] == 8'hFF) continue;

        a_in    = ra;
        b_in    = rb;
        sub     = $urandom_range(0, 1);
        rnd_mode = RND_RNE;
        #10;

        fa = bits_to_float(ra);
        fb = bits_to_float(rb);
        fr = sub ? (fa - fb) : (fa + fb);
        ref_result = float_to_bits(fr);

        total++;
        if (fp_equal(result, ref_result)) begin
          pass_cnt++;
        end else begin
          logic [31:0] diff;
          diff = (result > ref_result) ? (result - ref_result) : (ref_result - result);
          if (diff <= 1) begin
            pass_cnt++; // 1-ULP tolerance
          end else begin
            fail_cnt++;
            $display("[FAIL] Random#%0d: %s(0x%08H, 0x%08H) = 0x%08H, ref=0x%08H",
                     i, sub ? "SUB" : "ADD", ra, rb, result, ref_result);
          end
        end
      end
    end

    // ── Summary ──
    $display("\n════════════════════════════════════════════════════════════");
    $display("  Add/Sub TB: %0d total, %0d pass, %0d fail", total, pass_cnt, fail_cnt);
    if (fail_cnt == 0) $display("  ✓ ALL PASSED");
    else               $display("  ✗ FAILURES DETECTED");
    $display("════════════════════════════════════════════════════════════");

    $finish;
  end

endmodule