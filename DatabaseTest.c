#include "Database.c"
#include <assert.h>
#include <stdio.h>

static void it_constructs_database_structure()
{
	struct Database * database = Database_construct("path/test");

}

static void it_destructs_database_structure()
{
	struct Database * database = Database_construct("path/test");
	Database_destruct(database);
	assert(1 && "it_destructs_database_structure");
}

int main()
{
	it_constructs_database_structure();
	it_destructs_database_structure();
	return 0;
}
