#include "File.h"

int main()
{
    struct File file = {
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

    File_close(&file);

    return(0);
}
