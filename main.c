#include "File.h"
#include <stdio.h>
#include <string.h>
#include "Database.h"

int main(int argc, char *argv[])
{
	if (argc > 1) {
		char * path = argv[1];
		printf("Path: %s\n", path);

		if (argc > 2) {
			char command[16];
			strcpy(command, "create");
			if (strcmp(argv[2], command) == 0) {
				printf("Command: %s\n", command);
				if (argc > 3) {
					char object[16];
					strcpy(object, "database");
					if (strcmp(argv[3], object) == 0) {
						printf("Object: %s\n", object);
						if (argc > 4) {
							char unitSizeInBytes = *argv[4] - '0';
							printf("Unit size in bytes: %d\n", unitSizeInBytes);
							struct Database database = Database_constructNew(path, unitSizeInBytes);
							Database_create(&database);
						} else {

						}
					}
					strcpy(object, "node");
					if (strcmp(argv[3], object) == 0) {
						printf("Object: %s\n", argv[3]);
					}
				}
			}
		}
	}

	/*struct File file = {
        .path = "data",
        .mode = "a",
        .resource = NULL
    };

    File_open(&file);

    char value = 4;
    int i;
    for (i=1; i<10; i++)
    {
        File_write(&file, &value);
    }

    File_close(&file);*/

    return(0);
}
