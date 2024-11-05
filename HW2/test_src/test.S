.org 0x0
.global _start
_start:
    ori     x8, x0, -20
    ori   	x4, x4, -1  
    ori     x3, x3, 3  
    and     x10, x3, x4     # x10 = 3 & -1 = 3
    add     x3, x10, x4     # x3 = 3 + -1 = 2
    ori     x4, x0, 33      # x4 = 33
    ori		x5, x0, 0x80    # x5 = 10000000
    srl     x6, x5, x4      # x6 = 01000000
    sra     x7, x8, x4      # x7 = -10
    
    
