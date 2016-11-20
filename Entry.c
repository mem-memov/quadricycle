#include "Entry.h"
#include "Link.c"
#include <stdlib.h>

struct Entry * Entry_construct()
{
	struct Entry * entry = malloc(sizeof(struct Entry));

	entry->inside = Link_construct();
	entry->outside = Link_construct();
	entry->next = NULL;

	return entry;
}

void Entry_destruct(struct Entry * entry)
{
	if (NULL != entry->next) {
		free(entry->next);
	}
	free(entry);
}
