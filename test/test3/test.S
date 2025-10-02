    .text
    .globl _start
_start:

    la   x10, _base        # x10 = &base[0]
    la   x11, _sink        # x11 = &sink[0]

# Case A
    lw   x5,  0(x10)      # load base[0]
    add  x6,  x5, x7      # hazard here
    sw   x6,  0(x11)      # record result

# Case C
    lw   x5,  4(x10)      # load base[1]
    sw   x5,  4(x11)      # hazard here (store data)

# Case D
    lw   x5,  8(x10)      # load address into x5
    sw   x1,  0(x5)       # hazard here (store address)

# Case E
    lw   x5, 12(x10)      # load comparison value
    beq  x5, x0, ok
    sw   x0,  8(x11)      # if taken/wrong, mark fail path
ok:
    sw   x5,  8(x11)      # mark pass path


_base:
    .word 0x00000011      # base[0]
    .word 0x00000022      # base[1]
    .word 0x00000000      # base[2] -> address for Case D
    .word 0x00000000      # base[3] for branch compare

_sink:
    .space 32
