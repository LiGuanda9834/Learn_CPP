
.PHONY: all say_Hello clean

CC := g++

LINKFLAG = -lm

SRCS := ${wildcard *.cpp}
BINS := ${SRCS:%.cpp=%}

all: TestOpenMP

TestOpenMP:
	@-echo "compiling..."
	g++ -fopenmp -o TestOpenMP TestOpenMP.cpp

clean:
	@-echo "cleaning the BIN and OBJ files..."
	@-rm -rvf *.o ${BINS}

clean_log:
	@-echo "cleaning the log files..."
	@-rm -rvf *.out
	@-rm -rvf *.err

clean_all:
	@-echo "cleaning all files..."
	@-rm -rvf *.out
	@-rm -rvf *.err
	@-rm -rvf *.o ${BINS}

