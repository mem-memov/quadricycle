#include "Database.h"
#include "File.h"
#include <stdlib.h>

struct Database * Database_construct(char * path)
{
	struct Database * database = malloc(sizeof(struct Database));

	database->path = path;

	return database;
}

void Database_destruct(struct Database * database)
{

}

void Database_create(struct Database * database)
{
	struct File file = {
		.path = database->path,
		.mode = "w",
		.resource = NULL
	};

	if (File_exists(&file) != 0) {
		exit(1);
	}

	File_open(&file);
	File_close(&file);
}

char Database_unitSizeInBytes(struct Database * database)
{

}
