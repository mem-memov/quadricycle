quadricycle: main.o file.o
	gcc main.o file.o -o quadricycle
main.o: main.c file.h
	gcc -c main.c
file.o: file.c file.h
	gcc -c file.c
clean:
	rm *.o quadricycle
