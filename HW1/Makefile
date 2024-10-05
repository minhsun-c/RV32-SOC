FLAG = -Wall --cc --exe --trace
INC = -Isrc
SRCS = src/*.v
TBS = tb/*.cpp

all: 
	verilator $(FLAG) $(INC) --build $(TBS) test_top.v $(SRCS)

clean:
	rm -rf obj_dir
	rm wave.vcd