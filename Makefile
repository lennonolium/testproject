test: test.c
	gcc -o test test.c

clean:
	rm -rf test

all: test
