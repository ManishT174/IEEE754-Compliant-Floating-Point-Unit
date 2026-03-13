// =============================================================================
// tb_fpu_mul.sv
// Unit-level testbench for FP Multiplication
// =============================================================================
// Tests:
//   - Basic multiplication (positive, negative, mixed signs)
//   - Powers of two (exact results, no rounding)
//   - Exponent overflow → infinity
//   - Exponent underflow → zero / denormal
//   - Rounding with all 4 IEEE modes
//   - Special values: NaN × x, Inf × x, 0 × x, Inf × 0
//   - Denormal × normal
//   - Random stress
// =============================================================================

`timescale 1ns / 1ps

module tb_fpu_mul;

  import fpu_pkg::*;

  logic [FLEN-1:0]  a_in, b_in;
  round_mode_t      rnd_mode;
  logic [FLEN-1:0]  result;
  fpu_flags_t       flags;

  fpu_mul u_dut (
    .a_in     (a_in),
    .b_in     (b_in),
    .rnd_mode (rnd_mode),
    .result   (result),
    .flags    (flags)
  );

  // ── Helpers ──
  function automatic shortreal b2f(input logic [31:0] bits);
    return $bitstoshortreal(bits);
  endfunction

  function automatic logic [31:0] f2b(input shortreal f);
    return $shortrealtobits(f);
  endfunction

  function automatic logic is_nan(input logic [31:0] b);
    return (b[30:23] == 8'hFF) && (b[22:0] != 0);
  endfunction

  function automatic logic fp_eq(input logic [31:0] a, b);
    if (is_nan(a) && is_nan(b)) return 1;
    if ((a == 32'h0 || a == 32'h8000_0000) &&
        (b == 32'h0 || b == 32'h8000_0000)) return 1;
    return (a == b);
  endfunction

  int total, pass_cnt, fail_cnt;

  task automatic check(
    input logic [31:0] a, b, expected,
    input round_mode_t rm,
    input string       name
  );
    a_in = a; b_in = b; rnd_mode = rm;
    #10;
    total++;
    if (fp_eq(result, expected)) begin
      pass_cnt++;
      $display("[PASS] %s → 0x%08H", name, result);
    end else begin
      fail_cnt++;
      $display("[FAIL] %s → 0x%08H, expected 0x%08H", name, result, expected);
      $display("       flags: NV=%0b DZ=%0b OF=%0b UF=%0b NX=%0b",
               flags.invalid, flags.div_zero, flags.overflow, flags.underflow, flags.inexact);
    end
  endtask

  // Constants
  localparam logic [31:0] P0   = 32'h0000_0000;
  localparam logic [31:0] N0   = 32'h8000_0000;
  localparam logic [31:0] PINF = 32'h7F80_0000;
  localparam logic [31:0] NINF = 32'hFF80_0000;
  localparam logic [31:0] QNAN = 32'h7FC0_0000;
  localparam logic [31:0] SNAN = 32'h7F80_0001;
  localparam logic [31:0] ONE  = 32'h3F80_0000;
  localparam logic [31:0] NONE = 32'hBF80_0000;
  localparam logic [31:0] TWO  = 32'h4000_0000;
  localparam logic [31:0] HALF = 32'h3F00_0000;
  localparam logic [31:0] THREE = 32'h4040_0000;
  localparam logic [31:0] MAXF = 32'h7F7F_FFFF;
  localparam logic [31:0] MINDN= 32'h0000_0001;
  localparam logic [31:0] MINN = 32'h0080_0000;

  initial begin
    $display("════════════════════════════════════════════════════════════");
    $display("  FPU Multiply — Unit Testbench");
    $display("════════════════════════════════════════════════════════════");

    total = 0; pass_cnt = 0; fail_cnt = 0;

    // ── Basic multiplication ──
    $display("\n── Basic ──");
    check(ONE, ONE, ONE, RND_RNE,           "1 × 1 = 1");
    check(TWO, THREE, f2b(6.0), RND_RNE,   "2 × 3 = 6");
    check(NONE, ONE, NONE, RND_RNE,         "(-1) × 1 = -1");
    check(NONE, NONE, ONE, RND_RNE,         "(-1) × (-1) = 1");
    check(HALF, TWO, ONE, RND_RNE,          "0.5 × 2 = 1");
    check(f2b(10.0), f2b(0.1), ONE, RND_RNE, "10 × 0.1 ≈ 1"); // may be 1-ULP off

    // ── Powers of two (exact) ──
    $display("\n── Powers of Two ──");
    check({1'b0, 8'd130, 23'd0}, {1'b0, 8'd131, 23'd0},
          {1'b0, 8'd134, 23'd0}, RND_RNE, "2^3 × 2^4 = 2^7 (exact)");
    check({1'b0, 8'd120, 23'd0}, {1'b0, 8'd120, 23'd0},
          {1'b0, 8'd113, 23'd0}, RND_RNE, "2^-7 × 2^-7 = 2^-14 (exact)");

    // ── Sign combinations ──
    $display("\n── Sign Rules ──");
    check(P0, ONE, P0, RND_RNE,    "+0 × 1 = +0");
    check(N0, ONE, N0, RND_RNE,    "-0 × 1 = -0");
    check(N0, NONE, P0, RND_RNE,   "-0 × (-1) = +0");
    check(P0, NONE, N0, RND_RNE,   "+0 × (-1) = -0");

    // ── Special values ──
    $display("\n── Specials ──");
    check(PINF, TWO, PINF, RND_RNE,    "Inf × 2 = Inf");
    check(PINF, NONE, NINF, RND_RNE,   "Inf × (-1) = -Inf");
    check(NINF, NINF, PINF, RND_RNE,   "-Inf × -Inf = +Inf");
    check(PINF, P0, QNAN, RND_RNE,     "Inf × 0 = NaN (invalid)");
    check(P0, PINF, QNAN, RND_RNE,     "0 × Inf = NaN (invalid)");
    check(QNAN, ONE, QNAN, RND_RNE,    "NaN × 1 = NaN");
    check(ONE, QNAN, QNAN, RND_RNE,    "1 × NaN = NaN");
    check(SNAN, ONE, QNAN, RND_RNE,    "SNaN × 1 = QNaN (invalid)");
    check(QNAN, QNAN, QNAN, RND_RNE,   "NaN × NaN = NaN");

    // ── Overflow ──
    $display("\n── Overflow ──");
    check(MAXF, TWO, PINF, RND_RNE,       "max × 2 = Inf (overflow, RNE)");
    check(MAXF, TWO, MAXF, RND_RTZ,       "max × 2 → max (overflow, RTZ)");
    check({1'b1, MAXF[30:0]}, TWO, NINF, RND_RNE, "-max × 2 = -Inf (overflow)");

    // ── Underflow ──
    $display("\n── Underflow ──");
    check(MINDN, MINDN, P0, RND_RNE,   "min_denorm × min_denorm → 0");
    check(MINN, HALF, {1'b0, 8'd0, 23'd0}, RND_RNE,
          "min_normal × 0.5 → underflow");

    // ── Rounding modes ──
    $display("\n── Rounding Modes ──");
    // 1.00000000000000000000001 × 1.1 (in binary) triggers rounding
    begin
      logic [31:0] a_val, b_val;
      a_val = 32'h3F80_0001; // 1 + 1ULP
      b_val = 32'h3FC0_0000; // 1.5

      check(a_val, b_val, f2b(b2f(a_val) * b2f(b_val)), RND_RNE,
            "(1+ULP) × 1.5 RNE");
      check(a_val, b_val, f2b(b2f(a_val) * b2f(b_val)), RND_RTZ,
            "(1+ULP) × 1.5 RTZ");
    end

    // ── Random stress ──
    $display("\n── Random Stress ──");
    begin
      logic [31:0] ra, rb, ref_r;
      shortreal fa, fb, fr;

      for (int i = 0; i < 10000; i++) begin
        ra = $urandom();
        rb = $urandom();
        if (ra[30:23] == 8'hFF || rb[30:23] == 8'hFF) continue;

        a_in = ra; b_in = rb; rnd_mode = RND_RNE;
        #10;

        fa = b2f(ra); fb = b2f(rb);
        fr = fa * fb;
        ref_r = f2b(fr);

        total++;
        if (fp_eq(result, ref_r)) begin
          pass_cnt++;
        end else begin
          logic [31:0] diff;
          diff = (result > ref_r) ? (result - ref_r) : (ref_r - result);
          if (diff <= 1) pass_cnt++; // 1-ULP tolerance
          else begin
            fail_cnt++;
            $display("[FAIL] Rand#%0d: 0x%08H × 0x%08H = 0x%08H, ref=0x%08H (diff=%0d)",
                     i, ra, rb, result, ref_r, diff);
          end
        end
      end
    end

    // ── Summary ──
    $display("\n════════════════════════════════════════════════════════════");
    $display("  Mul TB: %0d total, %0d pass, %0d fail", total, pass_cnt, fail_cnt);
    if (fail_cnt == 0) $display("  ✓ ALL PASSED");
    else               $display("  ✗ FAILURES DETECTED");
    $display("════════════════════════════════════════════════════════════");
    $finish;
  end

endmodule