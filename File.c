#include <stdio.h>
#include "File.h"

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

void File_write(struct File * file, char * value)
{
    fwrite(value, sizeof(char), 1, file->resource);
}
