// fpu_pkg.sv
package fpu_pkg;

  // IEEE 754 Single Precision parameters
  parameter int EXPW  = 8;
  parameter int MANW  = 23;
  parameter int FLEN  = 32;
  parameter int BIAS  = 127;

  // Rounding modes
  typedef enum logic [1:0] {
    RND_RNE  = 2'b00,  // Round to Nearest, ties to Even
    RND_RTZ  = 2'b01,  // Round toward Zero
    RND_RDN  = 2'b10,  // Round toward -Infinity
    RND_RUP  = 2'b11   // Round toward +Infinity
  } round_mode_t;

  // Operation select
  typedef enum logic [2:0] {
    OP_ADD   = 3'd0,
    OP_SUB   = 3'd1,
    OP_MUL   = 3'd2,
    OP_DIV   = 3'd3,
    OP_I2F   = 3'd4,
    OP_F2I   = 3'd5,
    OP_CMP   = 3'd6
  } fpu_op_t;

  // Exception flags (sticky, active-high)
  typedef struct packed {
    logic invalid;    // NV - invalid operation
    logic div_zero;   // DZ - division by zero
    logic overflow;   // OF - exponent overflow
    logic underflow;  // UF - exponent underflow
    logic inexact;    // NX - result was rounded
  } fpu_flags_t;

  // Unpacked floating-point representation used internally
  typedef struct packed {
    logic                sign;
    logic [EXPW-1:0]     exp;
    logic [MANW-1:0]     man;  // stored mantissa (no implicit 1)
  } fp32_t;

  // Classification of a float
  typedef struct packed {
    logic is_zero;
    logic is_inf;
    logic is_nan;
    logic is_snan;     // signaling NaN
    logic is_qnan;     // quiet NaN
    logic is_denorm;
    logic is_normal;
  } fp_class_t;

  // Canonical quiet NaN
  parameter logic [FLEN-1:0] QNAN = {1'b0, 8'hFF, 1'b1, 22'd0};

  // ── Helper functions ──

  function automatic fp_class_t classify(input fp32_t f);
    fp_class_t c;
    logic exp_zero = (f.exp == '0);
    logic exp_max  = (f.exp == '1);  // 8'hFF
    logic man_zero = (f.man == '0);

    c.is_zero   = exp_zero & man_zero;
    c.is_denorm = exp_zero & ~man_zero;
    c.is_inf    = exp_max  & man_zero;
    c.is_nan    = exp_max  & ~man_zero;
    c.is_snan   = c.is_nan & ~f.man[MANW-1];  // MSB of mantissa = 0 → signaling
    c.is_qnan   = c.is_nan &  f.man[MANW-1];
    c.is_normal = ~exp_zero & ~exp_max;
    return c;
  endfunction

  // Return the implicit leading bit (1 for normal, 0 for denorm/zero)
  function automatic logic leading_bit(input fp32_t f);
    return (f.exp != '0);  // 1 if normal, 0 if denorm or zero
  endfunction

endpackage