CC = clang
CFLAGS = -Wall
fib: main.o fib.o
	$(CC) $(CFLAGS) -o fib main.o fib.o

main.o:main.c fib.h
	$(CC) $(CFLAGS) -c main.c

fib.o: fib.c
	$(CC) $(CFLAG) -c fib.c

clean:
	rm -f *.o
