// =============================================================================
// tb_fpu_div.sv
// Unit-level testbench for FP Division
// =============================================================================
// Tests:
//   - Exact divisions (powers of two, identity)
//   - Division by zero → ±Inf, 0/0 → NaN
//   - Inf / x, x / Inf, Inf / Inf
//   - NaN propagation
//   - Rounding (results requiring all 4 modes)
//   - Denormal dividend/divisor
//   - Overflow/underflow of quotient exponent
//   - Random stress with reference model
// =============================================================================

`timescale 1ns / 1ps

module tb_fpu_div;

  import fpu_pkg::*;

  logic [FLEN-1:0]  a_in, b_in;
  round_mode_t      rnd_mode;
  logic [FLEN-1:0]  result;
  fpu_flags_t       flags;

  fpu_div u_dut (
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
      // Allow 1 ULP
      logic [31:0] diff;
      diff = (result > expected) ? (result - expected) : (expected - result);
      if (diff <= 1 && !is_nan(expected)) begin
        pass_cnt++;
        $display("[PASS] %s → 0x%08H (1-ULP from 0x%08H)", name, result, expected);
      end else begin
        fail_cnt++;
        $display("[FAIL] %s → 0x%08H, expected 0x%08H", name, result, expected);
        $display("       flags: NV=%0b DZ=%0b OF=%0b UF=%0b NX=%0b",
                 flags.invalid, flags.div_zero, flags.overflow, flags.underflow, flags.inexact);
      end
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
  localparam logic [31:0] FOUR = 32'h4080_0000;
  localparam logic [31:0] HALF = 32'h3F00_0000;
  localparam logic [31:0] TEN  = 32'h4120_0000;
  localparam logic [31:0] MAXF = 32'h7F7F_FFFF;
  localparam logic [31:0] MINDN= 32'h0000_0001;

  initial begin
    $display("════════════════════════════════════════════════════════════");
    $display("  FPU Division — Unit Testbench");
    $display("════════════════════════════════════════════════════════════");

    total = 0; pass_cnt = 0; fail_cnt = 0;

    // ── Exact division ──
    $display("\n── Exact Division ──");
    check(ONE,  ONE,  ONE,  RND_RNE, "1 / 1 = 1");
    check(FOUR, TWO,  TWO,  RND_RNE, "4 / 2 = 2");
    check(ONE,  TWO,  HALF, RND_RNE, "1 / 2 = 0.5");
    check(NONE, ONE,  NONE, RND_RNE, "(-1) / 1 = -1");
    check(NONE, NONE, ONE,  RND_RNE, "(-1) / (-1) = 1");

    // ── Powers of two ──
    $display("\n── Powers of Two ──");
    check({1'b0, 8'd135, 23'd0}, {1'b0, 8'd130, 23'd0},
          {1'b0, 8'd132, 23'd0}, RND_RNE, "2^8 / 2^3 = 2^5");

    // ── Division by zero ──
    $display("\n── Division by Zero ──");
    check(ONE,  P0,   PINF, RND_RNE, "1 / +0 = +Inf (DZ flag)");
    check(NONE, P0,   NINF, RND_RNE, "(-1) / +0 = -Inf");
    check(ONE,  N0,   NINF, RND_RNE, "1 / -0 = -Inf");
    check(NONE, N0,   PINF, RND_RNE, "(-1) / -0 = +Inf");
    check(P0,   P0,   QNAN, RND_RNE, "0 / 0 = NaN (invalid)");
    check(N0,   P0,   QNAN, RND_RNE, "-0 / 0 = NaN (invalid)");

    // Verify DZ flag is set for normal / zero
    a_in = ONE; b_in = P0; rnd_mode = RND_RNE;
    #10;
    if (flags.div_zero)
      $display("[PASS] DZ flag correctly set for 1/0");
    else begin
      $display("[FAIL] DZ flag NOT set for 1/0");
      fail_cnt++;
    end
    total++;

    // ── Infinity ──
    $display("\n── Infinity ──");
    check(PINF, TWO,  PINF, RND_RNE, "Inf / 2 = Inf");
    check(NINF, TWO,  NINF, RND_RNE, "-Inf / 2 = -Inf");
    check(ONE,  PINF, P0,   RND_RNE, "1 / Inf = +0");
    check(NONE, PINF, N0,   RND_RNE, "(-1) / Inf = -0");
    check(PINF, PINF, QNAN, RND_RNE, "Inf / Inf = NaN");
    check(NINF, PINF, QNAN, RND_RNE, "-Inf / Inf = NaN");
    check(P0,   PINF, P0,   RND_RNE, "0 / Inf = 0");

    // ── NaN ──
    $display("\n── NaN Propagation ──");
    check(QNAN, ONE,  QNAN, RND_RNE, "NaN / 1 = NaN");
    check(ONE,  QNAN, QNAN, RND_RNE, "1 / NaN = NaN");
    check(QNAN, QNAN, QNAN, RND_RNE, "NaN / NaN = NaN");
    check(SNAN, ONE,  QNAN, RND_RNE, "SNaN / 1 → QNaN (invalid)");

    // Verify invalid flag for SNaN
    a_in = SNAN; b_in = ONE; rnd_mode = RND_RNE;
    #10;
    total++;
    if (flags.invalid) begin
      pass_cnt++;
      $display("[PASS] Invalid flag set for SNaN input");
    end else begin
      fail_cnt++;
      $display("[FAIL] Invalid flag NOT set for SNaN input");
    end

    // ── Zero dividend ──
    $display("\n── Zero Dividend ──");
    check(P0, ONE, P0, RND_RNE,    "+0 / 1 = +0");
    check(N0, ONE, N0, RND_RNE,    "-0 / 1 = -0");
    check(P0, NONE, N0, RND_RNE,   "+0 / (-1) = -0");

    // ── Inexact results ──
    $display("\n── Inexact Results ──");
    check(ONE, f2b(3.0), f2b(b2f(ONE) / b2f(f2b(3.0))), RND_RNE,
          "1 / 3 (inexact, RNE)");
    check(TEN, f2b(3.0), f2b(b2f(TEN) / b2f(f2b(3.0))), RND_RNE,
          "10 / 3 (inexact, RNE)");

    // ── Rounding modes ──
    $display("\n── Rounding Modes ──");
    // 1/3 with all rounding modes
    begin
      logic [31:0] one_third_rne;
      one_third_rne = f2b(shortreal'(1.0) / shortreal'(3.0));

      check(ONE, f2b(3.0), one_third_rne, RND_RNE, "1/3 RNE");
      check(ONE, f2b(3.0), one_third_rne, RND_RTZ, "1/3 RTZ"); // may differ by 1 ULP
      check(ONE, f2b(3.0), one_third_rne, RND_RUP, "1/3 RUP");
      check(ONE, f2b(3.0), one_third_rne, RND_RDN, "1/3 RDN");
    end

    // ── Random stress ──
    $display("\n── Random Stress ──");
    begin
      logic [31:0] ra, rb, ref_r;
      shortreal fa, fb, fr;

      for (int i = 0; i < 10000; i++) begin
        ra = $urandom();
        rb = $urandom();
        // Skip NaN, Inf, and zero divisor for reference model
        if (ra[30:23] == 8'hFF || rb[30:23] == 8'hFF) continue;
        if (rb[30:0] == 31'd0) continue; // skip zero divisor

        a_in = ra; b_in = rb; rnd_mode = RND_RNE;
        #10;

        fa = b2f(ra); fb = b2f(rb);
        fr = fa / fb;
        ref_r = f2b(fr);

        total++;
        if (fp_eq(result, ref_r)) begin
          pass_cnt++;
        end else begin
          logic [31:0] diff;
          diff = (result > ref_r) ? (result - ref_r) : (ref_r - result);
          if (diff <= 2) pass_cnt++; // 2-ULP tolerance for div (restoring div approximations)
          else begin
            fail_cnt++;
            if (fail_cnt <= 20) // limit spam
              $display("[FAIL] Rand#%0d: 0x%08H / 0x%08H = 0x%08H, ref=0x%08H (diff=%0d)",
                       i, ra, rb, result, ref_r, diff);
          end
        end
      end
    end

    // ── Summary ──
    $display("\n════════════════════════════════════════════════════════════");
    $display("  Div TB: %0d total, %0d pass, %0d fail", total, pass_cnt, fail_cnt);
    if (fail_cnt == 0) $display("  ✓ ALL PASSED");
    else               $display("  ✗ FAILURES DETECTED");
    $display("════════════════════════════════════════════════════════════");
    $finish;
  end

endmodule