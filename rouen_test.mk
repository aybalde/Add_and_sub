# Makefile for the rouen_test program

CC = gcc
CFLAGS = -Wall -Wextra

rouen_test: master.o function.o
	$(CC) $(CFLAGS) master.o function.o -o rouen_test

master.o : master.c  function.h
	$(CC) $(CFLAGS) -c master.c -o master.o

function.o: function.c function.h
	$(CC) $(CFLAGS) -c function.c -o function.o

clean:
	rm -f *.o rouen_test

