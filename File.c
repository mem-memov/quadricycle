#include "File.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

struct File * File_construct(char * path, char * mode)
{
	struct File * file = malloc(sizeof(struct File));

	file->path = path;
	file->mode = mode;
	file->resource = NULL;

	return file;
}

void File_destruct(struct File * file)
{
	free(file);
}

char * File_path(struct File * file)
{
    return file->path;
}

char * File_mode(struct File * file)
{
    return file->mode;
}

void File_open(struct File * file)
{
    file->resource = fopen(file->path, file->mode);

    if (file->resource == NULL) {
        fprintf(stderr, "File not opened %s", file->path);
    }
}

void File_close(struct File * file)
{
    fclose(file->resource);
}

void File_writeByte(struct File * file, char * value)
{
    fwrite(value, sizeof(char), 1, file->resource);
}

void File_readByte(struct File * file, char * buffer)
{
	fread(buffer, sizeof(char), 1, file->resource);
}

int File_exists(struct File * file)
{
	struct stat buffer;   
	return (stat(file->path, &buffer) == 0);
}
