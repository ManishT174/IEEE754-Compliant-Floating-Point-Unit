// ============================================================================
// fpu_adder.sv — IEEE 754 Floating Point Adder / Subtractor
// ============================================================================
// Performs A + B or A - B on single-precision IEEE 754 numbers.
//
// ALGORITHM (detailed step-by-step):
//
// Step 1: UNPACK both inputs
//   - Extract sign, exponent, mantissa
//   - Restore the implicit leading bit:
//       Normal:    mantissa becomes {1, stored_mantissa} = 24 bits
//       Denormal:  mantissa becomes {0, stored_mantissa} = 24 bits
//       Zero:      mantissa is 0
//
// Step 2: DETERMINE EFFECTIVE OPERATION
//   - ADD with same signs → effective addition
//   - ADD with different signs → effective subtraction
//   - SUB with same signs → effective subtraction  
//   - SUB with different signs → effective addition
//   - Formula: eff_sub = is_sub XOR (sign_a XOR sign_b)
//
// Step 3: SWAP so operand A has the larger magnitude
//   - Compare exponents first (larger exp = larger magnitude for normals)
//   - If exponents equal, compare mantissas
//   - This simplifies the subtraction logic (result magnitude = A - B ≥ 0)
//   - Track whether we swapped (affects result sign)
//
// Step 4: ALIGN mantissas by right-shifting the smaller operand
//   - Shift amount = exp_A - exp_B (always ≥ 0 after swap)
//   - As bits are shifted out, they feed into Guard, Round, Sticky
//   - The sticky bit is the OR of ALL bits shifted past the round position
//   - This is where precision can be lost
//   - Example: adding 1.0 × 2^10 + 1.0 × 2^0 
//     → shift 1.0 right by 10 → becomes 0.0000000001 with lost bits → sticky
//
// Step 5: ADD or SUBTRACT aligned mantissas
//   - If effective add: result = man_A + man_B_shifted
//     → Can produce a carry (result has 25+ bits)
//   - If effective sub: result = man_A - man_B_shifted
//     → Can produce leading zeros (massive cancellation)
//
// Step 6: NORMALIZE the result
//   - If carry out (from add): right-shift by 1, exp++, capture shifted bit in GRS
//   - If leading zeros (from sub): left-shift by N, exp -= N
//   - If exp goes below 1 → result is denormalized
//   - If exp goes to 0 and mantissa is 0 → result is zero
//
// Step 7: ROUND using Guard, Round, Sticky bits (delegated to fpu_round)
//
// Step 8: PACK the result back into IEEE 754 format
// ============================================================================

module fpu_adder
  import fpu_pkg::*;
(
  input  logic [FP_W-1:0]   a_i,          // Operand A
  input  logic [FP_W-1:0]   b_i,          // Operand B
  input  logic               is_sub_i,     // 0 = ADD, 1 = SUB
  input  round_mode_t        rnd_mode_i,   // Rounding mode

  output logic [FP_W-1:0]   result_o,     // IEEE 754 result
  output fpu_flags_t         flags_o       // Exception flags
);

  // ==========================================================================
  // STEP 1: UNPACK
  // ==========================================================================
  logic        a_sign, b_sign;
  logic [7:0]  a_exp,  b_exp;
  logic [22:0] a_man,  b_man;
  fp_class_t   a_class, b_class;

  assign a_sign = a_i[31];
  assign b_sign = b_i[31];
  assign a_exp  = a_i[30:23];
  assign b_exp  = b_i[30:23];
  assign a_man  = a_i[22:0];
  assign b_man  = b_i[22:0];
  assign a_class = fp_classify(a_i);
  assign b_class = fp_classify(b_i);

  // Restore implicit leading bit: {1/0, 23-bit mantissa} = 24 bits
  logic [23:0] a_mantissa_full, b_mantissa_full;
  assign a_mantissa_full = (a_exp != 0) ? {1'b1, a_man} : {1'b0, a_man}; // normal vs denormal
  assign b_mantissa_full = (b_exp != 0) ? {1'b1, b_man} : {1'b0, b_man};

  // Effective exponent: denormals have effective exponent of 1 (not 0)
  logic [7:0] a_exp_eff, b_exp_eff;
  assign a_exp_eff = (a_exp == 0) ? 8'd1 : a_exp;
  assign b_exp_eff = (b_exp == 0) ? 8'd1 : b_exp;

  // ==========================================================================
  // STEP 2: DETERMINE EFFECTIVE OPERATION
  // ==========================================================================
  // For SUB, we negate B's sign, then it's an addition problem
  logic b_sign_eff;
  assign b_sign_eff = is_sub_i ? ~b_sign : b_sign;

  // Effective subtraction if signs differ (after SUB adjustment)
  logic eff_sub;
  assign eff_sub = (a_sign != b_sign_eff);

  // ==========================================================================
  // STEP 3: SWAP so A ≥ B in magnitude
  // ==========================================================================
  // We want the larger magnitude in the "large" operand for easy subtraction
  logic        swap;
  logic        large_sign, small_sign;
  logic [7:0]  large_exp, small_exp;
  logic [23:0] large_man, small_man;

  always_comb begin
    if (a_exp_eff > b_exp_eff) begin
      swap = 1'b0;
    end else if (a_exp_eff < b_exp_eff) begin
      swap = 1'b1;
    end else begin
      // Equal exponents: compare mantissas
      swap = (a_mantissa_full < b_mantissa_full);
    end
  end

  always_comb begin
    if (swap) begin
      large_sign = b_sign_eff;
      large_exp  = b_exp_eff;
      large_man  = b_mantissa_full;
      small_sign = a_sign;
      small_exp  = a_exp_eff;
      small_man  = a_mantissa_full;
    end else begin
      large_sign = a_sign;
      large_exp  = a_exp_eff;
      large_man  = a_mantissa_full;
      small_sign = b_sign_eff;
      small_exp  = b_exp_eff;
      small_man  = b_mantissa_full;
    end
  end

  // ==========================================================================
  // STEP 4: ALIGN mantissas
  // ==========================================================================
  // Shift the small mantissa right by the exponent difference.
  // We work with extended precision: {24-bit mantissa, Guard, Round, Sticky}
  // Total working width: 27 bits (24 + 3) but we use wider for shift

  logic [7:0] exp_diff;
  assign exp_diff = large_exp - small_exp;

  // Extended mantissas: {mantissa[23:0], G, R, S_accumulator} = 27 bits
  // But we need more width during shifting to track sticky bits properly
  logic [49:0] small_man_extended; // 24 + 26 extra bits for shift room
  logic [49:0] small_man_shifted;
  logic [23:0] small_man_aligned;
  logic        guard_bit, round_bit, sticky_bit;

  assign small_man_extended = {small_man, 26'b0}; // Place mantissa at top

  always_comb begin
    if (exp_diff >= 8'd50) begin
      // Shift so large that only sticky bit survives
      small_man_shifted = 50'b0;
      small_man_aligned = 24'b0;
      guard_bit  = 1'b0;
      round_bit  = 1'b0;
      sticky_bit = |small_man; // Any bit in original = sticky
    end else begin
      small_man_shifted = small_man_extended >> exp_diff;
      small_man_aligned = small_man_shifted[49:26];  // Top 24 bits
      guard_bit         = small_man_shifted[25];
      round_bit         = small_man_shifted[24];
      // Sticky = OR of all bits shifted out below round position
      // This includes bits [23:0] of shifted result AND any bits shifted completely out
      if (exp_diff > 8'd26) begin
        sticky_bit = |small_man_shifted[23:0] | (|small_man); 
        // When shift is large, some original bits were lost entirely
        // More precise: check if any of the bottom bits are nonzero
        sticky_bit = |small_man_shifted[23:0];
        if (exp_diff > 8'd26)
          sticky_bit = sticky_bit | (|(small_man_extended[exp_diff-1:0] & ~(small_man_shifted << exp_diff)[exp_diff-1:0]));
        // Simpler correct approach:
        sticky_bit = |small_man_shifted[23:0];
        // Also check bits that were shifted completely out of our window
        if (exp_diff > 8'd0) begin
          // The bits that fell off the bottom of our 50-bit window
          logic [49:0] mask;
          mask = (50'd1 << exp_diff) - 50'd1;
          sticky_bit = |small_man_shifted[23:0] | (|(small_man_extended & mask) && (exp_diff > 26));
        end
      end else begin
        sticky_bit = |small_man_shifted[23:0];
      end
    end
  end

  // Simpler and correct sticky bit computation:
  // After shifting right by exp_diff, sticky = OR of all bits below the round position
  logic sticky_correct;
  always_comb begin
    if (exp_diff == 0) begin
      sticky_correct = 1'b0;
    end else if (exp_diff == 8'd1) begin
      sticky_correct = 1'b0; // Only guard bit exists
    end else if (exp_diff == 8'd2) begin
      sticky_correct = 1'b0; // Guard and round exist
    end else if (exp_diff <= 8'd26) begin
      // Some bits are in our shifted result, just OR the bottom bits
      sticky_correct = |small_man_shifted[23:0];
    end else begin
      // Shift was so large that bits fell off our 50-bit window
      sticky_correct = |small_man; // Any nonzero bit in small mantissa → sticky
    end
  end

  // ==========================================================================
  // STEP 5: ADD or SUBTRACT aligned mantissas
  // ==========================================================================
  // We work with 25-bit values (24 mantissa + carry space) plus GRS
  logic [24:0] sum_mantissa;  // 25 bits for potential carry
  logic        sum_guard, sum_round, sum_sticky;

  always_comb begin
    if (!eff_sub) begin
      // Effective addition: large + small (both positive magnitudes)
      sum_mantissa = {1'b0, large_man} + {1'b0, small_man_aligned};
      sum_guard    = guard_bit;
      sum_round    = round_bit;
      sum_sticky   = sticky_correct;
    end else begin
      // Effective subtraction: large - small (result ≥ 0 due to swap)
      // Need to handle borrow from GRS bits
      // Subtract including GRS: {mantissa, G, R, S} - {mantissa, G, R, S}
      logic [26:0] large_ext, small_ext, sub_result;
      large_ext = {large_man, 3'b000};  // {24-bit mantissa, G=0, R=0, S=0}
      small_ext = {small_man_aligned, guard_bit, round_bit, sticky_correct};
      sub_result = {3'b000, large_ext} - {3'b000, small_ext};

      sum_mantissa = {1'b0, sub_result[26:3]};
      sum_guard    = sub_result[2];
      sum_round    = sub_result[1];
      sum_sticky   = sub_result[0];
    end
  end

  // ==========================================================================
  // STEP 6: NORMALIZE
  // ==========================================================================
  logic [24:0] norm_mantissa;
  logic        norm_guard, norm_round, norm_sticky;
  logic [8:0]  norm_exp; // 9 bits to detect overflow/underflow
  logic        result_is_zero;

  // Leading zero count for the sum (needed for left-shift normalization)
  logic [4:0] lzc_count;
  logic       lzc_all_zero;
  logic [26:0] lzc_input;
  assign lzc_input = {sum_mantissa, sum_guard, sum_round};

  leading_zero_counter #(.WIDTH(27)) u_lzc (
    .data_i     (lzc_input),
    .count_o    (lzc_count),
    .all_zero_o (lzc_all_zero)
  );

  always_comb begin
    result_is_zero = 1'b0;

    if (sum_mantissa[24]) begin
      // Case A: Carry out from addition → right-shift by 1, exp++
      // The carry bit becomes the new implicit 1
      norm_mantissa = sum_mantissa;
      norm_guard    = sum_mantissa[0]; // Bit shifted out becomes guard
      norm_round    = sum_guard;       // Old guard becomes round
      norm_sticky   = sum_round | sum_sticky; // Old round and sticky merge
      norm_exp      = {1'b0, large_exp} + 9'd1;
      // Actually: the mantissa is sum[24:1], and sum[0] is the new guard
      norm_mantissa = {1'b0, sum_mantissa[24:1]};
    end
    else if (sum_mantissa[23]) begin
      // Case B: Already normalized (leading 1 in bit 23)
      norm_mantissa = sum_mantissa;
      norm_guard    = sum_guard;
      norm_round    = sum_round;
      norm_sticky   = sum_sticky;
      norm_exp      = {1'b0, large_exp};
    end
    else if (lzc_all_zero && !sum_guard && !sum_round && !sum_sticky) begin
      // Case C: Result is exactly zero
      result_is_zero = 1'b1;
      norm_mantissa  = '0;
      norm_guard     = 1'b0;
      norm_round     = 1'b0;
      norm_sticky    = 1'b0;
      norm_exp       = '0;
    end
    else begin
      // Case D: Leading zeros → left-shift to normalize
      // The number of positions to shift left
      logic [4:0] shift_amt;

      // Don't shift so much that exponent goes below 1 (or 0 for denormals)
      if ({1'b0, large_exp} > {4'b0, lzc_count}) begin
        shift_amt = lzc_count;
      end else begin
        // Exponent would underflow → shift only until exp = 0 (denormal)
        shift_amt = large_exp[4:0] - 5'd1; // -1 because exp=1 is min normal
        if (large_exp == 0) shift_amt = 5'd0;
      end

      // Perform the left shift
      logic [26:0] shift_src;
      logic [26:0] shifted;
      shift_src = {sum_mantissa[23:0], sum_guard, sum_round, sum_sticky};
      shifted = shift_src << shift_amt;

      norm_mantissa = {1'b0, shifted[26:3]};
      norm_guard    = shifted[2];
      norm_round    = shifted[1];
      norm_sticky   = shifted[0];
      norm_exp      = {1'b0, large_exp} - {4'b0, shift_amt};
    end
  end

  // ==========================================================================
  // STEP 7 & 8: ROUND and PACK (via special cases + rounding module)
  // ==========================================================================

  // --- Special case handling ---
  logic        sp_is_special;
  logic [31:0] sp_result;
  fpu_flags_t  sp_flags;

  fpu_special_cases u_special (
    .a_i             (a_i),
    .b_i             (b_i),
    .op_i            (is_sub_i ? FPU_SUB : FPU_ADD),
    .a_class_o       (),
    .b_class_o       (),
    .is_special_o    (sp_is_special),
    .special_result_o(sp_result),
    .special_flags_o (sp_flags)
  );

  // --- Rounding ---
  logic [31:0] rounded_result;
  logic        round_overflow, round_inexact;

  // Result sign: large operand's sign (since we ensured |large| >= |small|)
  logic result_sign;
  always_comb begin
    if (result_is_zero) begin
      // IEEE 754: +0 + (-0) = +0 in RNE mode, -0 in RDN mode
      if (eff_sub && (a_sign != b_sign_eff))
        result_sign = (rnd_mode_i == RND_DOWN) ? 1'b1 : 1'b0;
      else
        result_sign = a_sign & b_sign_eff; // Both +0 → +0, both -0 → -0
    end else begin
      result_sign = large_sign;
    end
  end

  fpu_round u_round (
    .sign_i    (result_sign),
    .exp_i     (norm_exp[7:0]),
    .man_i     (norm_mantissa[22:0]),
    .guard_i   (norm_guard),
    .round_i   (norm_round),
    .sticky_i  (norm_sticky),
    .rnd_mode_i(rnd_mode_i),
    .result_o  (rounded_result),
    .overflow_o(round_overflow),
    .inexact_o (round_inexact)
  );

  // --- Final output mux ---
  always_comb begin
    if (sp_is_special) begin
      result_o = sp_result;
      flags_o  = sp_flags;
    end
    else if (result_is_zero) begin
      result_o = fp_pack(result_sign, 8'd0, 23'd0);
      flags_o  = '0;
    end
    else begin
      result_o = rounded_result;
      flags_o  = '0;
      flags_o.nx = round_inexact;
      flags_o.of = round_overflow;
      if (round_overflow)
        flags_o.nx = 1'b1; // Overflow always implies inexact
    end
  end

endmodule