# Homework 01

## Main Idea
This processor can only deal with I-Type instructions, i.e., `ADDI`, `SLTI`,  `SLTIU`, `XORI`, `ORI`, `ANDI`, `SLLI`, `SRLI`, `SRAI`.

`NOP` is also executable since it is equivalent to `ADDI x0, x0, 0`. 

The main problem with this current version of the processor is **data hazard**. That is, the ALU will not get the correct operand since the WB stage has not finished yet.

## Compile and Run
1. `make`: 
   -  Build `obj_dir` 
    ```makefile
    FLAG = -Wall --cc --exe --trace
    INC = -Isrc
    SRCS = src/*.v
    TBS = tb/*.cpp

    all: 
        verilator $(FLAG) $(INC) --build $(TBS) test_top.v $(SRCS)
    ```

2. `make -C obj_dir -f Vtest_top.mk`: 
    - Build the executable file with the Verilog module and testbench compiled.
    - `Vtest_top.mk` may vary due to the different name of the top file.

3. `./obj_dir/Vtest_top ./testSource/test.bin`:
   - Run the executable file with the machine code attached.