#include "Database.h"
#include "File.h"
#include <stdlib.h>

struct Database * Database_construct(char * path)
{
	struct Database * database = malloc(sizeof(struct Database));

	database->path = path;
	database->unitSizeInBytes = 0;

	return database;
}

struct Database * Database_constructNew(char * path, char unitSizeInBytes)
{
	struct Database * database = malloc(sizeof(struct Database));

	database->path = path;
	database->unitSizeInBytes = unitSizeInBytes;

	return database;
}

void Database_destruct(struct Database * database)
{

}

void Database_create(struct Database * database)
{
	if (database->unitSizeInBytes == 0) {
		exit(1);
	}

	struct File * file = File_construct(database->path, "w");

	if (File_exists(file) != 0) {
		exit(1);
	}

	File_open(file);
	File_close(file);
}

char Database_unitSizeInBytes(struct Database * database)
{
	if (database->unitSizeInBytes == 0) {
		struct File * file = File_construct(database->path, "r");
		File_open(file);
		char buffer = 0;
		do {
			File_readByte(file, &buffer);
			database->unitSizeInBytes++;
		} while (buffer == 0);
		File_close(file);
	}

	return database->unitSizeInBytes;
}
