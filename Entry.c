#include "Entry.h"
#include "Link.h"
#include <stdlib.h>

struct Entry * Entry_construct()
{
	struct Entry * entry = malloc(sizeof(struct Entry));

	entry->inside = Link_construct();
	entry->outside = Link_construct();

	return entry;
}

void Entry_destruct(struct Entry * entry)
{

}
