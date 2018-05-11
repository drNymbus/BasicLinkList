CC = g++
CPPFLAGS = -O2 -Wall -std=c++11
#LFLAGS = -L . -lbll

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all: Test

test.o: test.cpp bll.hpp
Test: test.o
	$(CC) test.o -o Test

.PHONY: clean
clean:
	rm -f Test test.o
