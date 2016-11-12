quadricycle: main.o File.o
	gcc main.o File.o -o quadricycle
main.o: main.c File.h
	gcc -c main.c
File.o: File.c File.h
	gcc -c File.c
clean:
	rm *.o quadricycle
