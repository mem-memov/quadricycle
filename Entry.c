#include "Entry.h"
#include <stdlib.h>

struct Entry * Entry_construct()
{
	struct Entry * entry = malloc(sizeof(struct Entry));

	return entry;
}

void Entry_destruct(struct Entry * entry)
{

}
