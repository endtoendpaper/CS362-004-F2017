CFLAGS = -Wall -fpic -coverage -lm -std=c99

default: testme.c
	gcc -o testme -g testme.c $(CFLAGS)
	testme
	gcov -b testme.c