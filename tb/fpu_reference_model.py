# fpu_reference_model.py
import struct
import math

def float_to_bits(f):
    return struct.unpack('>I', struct.pack('>f', f))[0]

def bits_to_float(b):
    return struct.unpack('>f', struct.pack('>I', b & 0xFFFFFFFF))[0]

def fp_add(a_bits, b_bits):
    a = bits_to_float(a_bits)
    b = bits_to_float(b_bits)
    return float_to_bits(a + b)

def fp_sub(a_bits, b_bits):
    a = bits_to_float(a_bits)
    b = bits_to_float(b_bits)
    return float_to_bits(a - b)

def fp_mul(a_bits, b_bits):
    a = bits_to_float(a_bits)
    b = bits_to_float(b_bits)
    return float_to_bits(a * b)

def fp_div(a_bits, b_bits):
    a = bits_to_float(a_bits)
    b = bits_to_float(b_bits)
    try:
        return float_to_bits(a / b)
    except ZeroDivisionError:
        if a == 0.0:
            return float_to_bits(float('nan'))
        else:
            return float_to_bits(math.copysign(float('inf'), a / abs(b) if b != 0 else a))

# Generate test vectors
def gen_corner_cases():
    """Returns list of (a_bits, b_bits) tuples"""
    specials = [
        0x00000000,  # +0
        0x80000000,  # -0
        0x7F800000,  # +Inf
        0xFF800000,  # -Inf
        0x7FC00000,  # QNaN
        0x7F800001,  # SNaN
        0x3F800000,  # 1.0
        0xBF800000,  # -1.0
        0x00000001,  # smallest denormal
        0x00800000,  # smallest normal
        0x7F7FFFFF,  # largest finite
    ]
    cases = []
    for a in specials:
        for b in specials:
            cases.append((a, b))
    return cases

if __name__ == "__main__":
    cases = gen_corner_cases()
    for a, b in cases:
        r = fp_add(a, b)
        print(f"ADD: {a:08X} + {b:08X} = {r:08X}")