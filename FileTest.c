#include "File.c"
#include <assert.h>
#include <stdio.h>

static void it_constructs_file_structure()
{
	struct File * file = File_construct("path/test", "r");
	assert(NULL == file->resource && "a constructed file has no resource");
}

static void it_destructs_file_structure()
{
	struct File * file = File_construct("path/test", "r");
	File_destruct(file);
	assert(1 && "it_destructs_file_structure");
}

int main()
{
	it_constructs_file_structure();
	it_destructs_file_structure();
	return 0;
}
