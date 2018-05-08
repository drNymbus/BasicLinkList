CC = g++
CPPFLAGS = -O2 -Wall -std=c++11
LFLAGS = -L . -lbll

srcdir = src
objdir = obj

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all: libbll.dylib Test

libbll.dylib: bll.cpp
	$(CC) -dynamiclib -o libbll.dylib bll.cpp

test.o: test.cpp bll.hpp
Test: test.o
	$(CC) test.o -o Test $(LFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ)
