#include <stdio.h>

struct File {
    char * path;
    char * mode;
    FILE * resource;
};

char * File_path(struct File * file);

char * File_mode(struct File * file);

void File_open(struct File * file);

void File_close(struct File * file);

void File_write(struct File * file, char * value);

int File_exists(struct File * file);
