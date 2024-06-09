CXX=g++
CXXFLAGS=-fopenmp -O2
LDFLAGS=-fopenmp

all: square

square: square.o
	$(CXX) $(LDFLAGS) -o $@ $^

square.o: square.cpp
	$(CXX) $(CXXFLAGS) -c $<
clean:
	rm -f square square.o