quadricycle: main.o File.o Database.o Node.o Entry.o Link.o Unit.o
	gcc main.o File.o Database.o Node.o Entry.o Link.o Unit.o -o quadricycle

main.o: main.c File.h
	gcc -c main.c

File.o: File.c File.h
	gcc -c File.c

Database.o: Database.c Database.h
	gcc -c Database.c

Node.o: Node.c Node.h Entry.h
	gcc -c Node.c

Entry.o: Entry.c Entry.h Link.h
	gcc -c Entry.c

Link.o: Link.c Link.h Unit.h
	gcc -c Link.c

Unit.o: Unit.c Unit.h
	gcc -c Unit.c

clean:
	rm *.o quadricycle

test:	File.o Database.o Node.o Entry.o Link.o Unit.o
	gcc FileTest.c -o FileTest && ./FileTest
	gcc DatabaseTest.c -o DatabaseTest && ./DatabaseTest
	gcc NodeTest.c -o NodeTest && ./NodeTest
	gcc EntryTest.c -o EntryTest && ./EntryTest
	gcc LinkTest.c -o LinkTest && ./LinkTest
	gcc UnitTest.c -o UnitTest && ./UnitTest
	rm *Test
