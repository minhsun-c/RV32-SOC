.org 0x0
.global _start
_start:
    ori x5, x3, -2
    ori x2, x4, 0x4
    ori x9, x0, -10
    nop
    ori x7, x4, 0x2
    addi x5, x5, 6
    ori x0, x0, 0
    srai x5, x9, 2