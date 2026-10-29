CC = gcc
CFLAGS = -Wall -Wextra



program: main.o vectorfuncs.o
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.c vectorfuncs.h
	$(CC) $(CFLAGS) -c $< -o $@

vectorfuncs.o: vectorfuncs.c vectorfuncs.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f program *.o

.PHONY: clean
