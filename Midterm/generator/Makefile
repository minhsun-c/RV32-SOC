CC = gcc
CFLAGS = -Wall -Wextra -g
INC = -Iinclude
SRCS = $(wildcard src/*.c)
OBJS = $(patsubst src/%.c, obj/%.o, $(SRCS))

all: obj gen

obj: 
	mkdir obj

gen: $(OBJS)
	$(CC) $(CFLAGS) $(INC) -o $@ $^

obj/%.o: src/%.c
	$(CC) $(CFLAGS) $(INC) -c -o $@ $^

clean:
	rm obj/* gen 
