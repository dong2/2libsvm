CC = g++
CFLAGS = -std=c++11 -pedantic -Wall -g -I. -L. -lsvm

.PHONY: all
all:
	DYLD_LIBRARY_PATH=. $(CC) ${CFLAGS} -o demo demo.c svm.cpp
	DYLD_LIBRARY_PATH=. $(CC) ${CFLAGS} -o test test.c svm.cpp

clean :
	rm -rf demo
	rm -rf test
