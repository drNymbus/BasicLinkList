CC = g++
CFLAGS = -O2 -Wall -std=c++11

srcdir = src/
objdir = obj/

SRC := $(wildcard $(srcdir)/*.cpp)
OBJ := (SRC:$(srcdir)/%.cpp=$(objdir)/%.o)

bll.o: bll.cpp bll.hpp
