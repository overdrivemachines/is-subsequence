
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

is-subsequence: is-subsequence.o
	$(CC) $(CFLAGS) -o is-subsequence is-subsequence.o

is-subsequence.o: is-subsequence.cpp
	$(CC) $(CFLAGS) -c is-subsequence.cpp

clean:
	rm -rf is-subsequence is-subsequence.o
