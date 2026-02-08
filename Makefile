CC = gcc
CFLAGS = -Wall -Wextra -std=c11
LDFLAGS = -lm 

all: v3test

v3test: v3math.o v3test.o
	$(CC) $(CFLAGS) -o v3test v3math.o v3test.o $(LDFLAGS)

v3math.o: v3math.c v3math.h
	$(CC) $(CFLAGS) -c v3math.c

v3test.o: v3test.c v3math.h
	$(CC) $(CFLAGS) -c v3test.c

clean:
	rm -f *.o v3test
