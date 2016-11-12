file.o: file.c file.h
	gcc -c file.c
main.o: main.c file.o file.h
	gcc -c main.c
main: main.o file.o
	gcc main.o file.o -o main
