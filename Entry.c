#include "Entry.h"
#include "Link.c"
#include <stdlib.h>

struct Entry * Entry_construct()
{
	struct Entry * entry = malloc(sizeof(struct Entry));

	entry->inside = NULL;
	entry->outside = NULL;

	return entry;
}

void Entry_destruct(struct Entry * entry)
{
	if (NULL != entry->inside) {
		Link_destruct(entry->inside);
	}

	if  (NULL != entry->outside) {
		Link_destruct(entry->outside);
	}

	free(entry);
}
