
.PHONY: all say_Hello clean

CC := g++

LINKFLAG = -lm

SRCS := ${wildcard *.cpp}
BINS := ${SRCS:%.cpp=%}


all: ${BINS}

#say_Hello:
#	@echo My first Compile

${BINS} : %: %.o
	@-echo "linking..."
	${CC} ${LINKFLAG} $< -o $@

%.o: %.cpp
	@-echo "compling..."
	${CC} -c $< -o $@

clean:
	@-rm -rvf *.o ${BINS}
