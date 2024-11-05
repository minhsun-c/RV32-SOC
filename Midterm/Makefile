TOP = wallace_tree
GTKWAVE = gtkwave


V_SRC = src/${TOP}.v
V_SRC += $(wildcard src/*_adder.v)
INC = -Iinclude

VFLAGS = --cc -trace -Wno-style

TESTBENCH_SRC = $(wildcard tb/*.cpp)
PROG = test

.DEFAULT_GOAL := all
all: vhdl

obj_dir/V${TOP}.mk: ${V_SRC} ${TESTBENCH_SRC} 
	verilator --cc --trace -Wall --exe --build ${TESTBENCH_SRC} ${INC} ${V_SRC} --trace
	
obj_dir/V${TOP}: obj_dir/V${TOP}.mk
	$(MAKE) -C obj_dir -f V$(TOP).mk

.PHONY : vhdl
vhdl: obj_dir/V${TOP}.mk

.PHONY : run
run: obj_dir/V${TOP}
	obj_dir/V${TOP}

.PHONY : wave
wave: run
	${GTKWAVE} wave.vcd

.PHONY : clean
clean:
	rm -rf obj_dir wave.vcd

