CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

all: vector3_test

vector3_test: src/vector3.c tests/main.c include/vector3.h
	$(CC) $(CFLAGS) src/vector3.c tests/main.c -o vector3_test

test: vector3_test
	./vector3_test

clean:
	rm -f vector3_test

.PHONY: all test clean