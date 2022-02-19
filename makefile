compile = gcc
all: compile
compile:
	gcc main.c answer.h
clean:
	rm out.o