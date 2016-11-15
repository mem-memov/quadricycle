#include <stdio.h>

struct File {
    char * path;
    char * mode;
    FILE * resource;
};

struct File * File_construct(char * path, char * mode);
void File_destruct(struct File * file);

char * File_path(struct File * file);

char * File_mode(struct File * file);

void File_open(struct File * file);

void File_close(struct File * file);

void File_writeByte(struct File * file, char * value);

void File_readByte(struct File * file, char * buffer);

int File_exists(struct File * file);
