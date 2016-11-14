#include "Database.h"
#include "File.h"
#include <stdlib.h>

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
