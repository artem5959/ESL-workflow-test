CC = gcc

program: main.c vectorfuncs.c
	$(CC) main.c -o program

