    .text
    .globl _start
_start:
    li   x1,  6         # dividend
    li   x2,  3         # divisor
    li   x3, -7         # negative operand
    li   x4,  5         # another operand

    # Multiplication
    mul    x5, x1, x2      # 6*3 = 18
    mulh   x6, x1, x3      # high half of 6*-7 = -42
    mulhsu x7, x3, x2      # signed*unsigned = -7*3
    mulhu  x8, x1, x4      # unsigned high part

    # Division
    div    x9,  x1, x2     # 6/3 = 2
    divu   x10, x4, x2     # 5/3 = 1
    div    x11, x3, x2     # -7/3 = -2
    divu   x12, x3, x2     # (unsigned) huge / 3

    # Remainder
    rem    x13, x1, x2     # 6 % 3 = 0
    remu   x14, x4, x2     # 5 % 3 = 2
    rem    x15, x3, x2     # -7 % 3 = -1
    remu   x16, x3, x2     # (unsigned) huge % 3

    # Write results to memory for checking
    la   x20, _sink
    sw   x5,  0(x20)
    sw   x6,  4(x20)
    sw   x7,  8(x20)
    sw   x8, 12(x20)
    sw   x9, 16(x20)
    sw   x10,20(x20)
    sw   x11,24(x20)
    sw   x12,28(x20)
    sw   x13,32(x20)
    sw   x14,36(x20)
    sw   x15,40(x20)
    sw   x16,44(x20)

    j .

_sink:
    .space 64
