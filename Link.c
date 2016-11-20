#include "Link.h"
#include "Unit.c"
#include <stdlib.h>

struct Link * Link_construct()
{
	struct Link * link = malloc(sizeof(struct Link));

	link->position = NULL;
	link->destination = NULL;

	return link;
}

void Link_destruct(struct Link * link)
{
	if (NULL != link->position) {
		Unit_destruct(link->position);
	}

	if (NULL != link->destination) {
		Unit_destruct(link->destination);
	}

	free(link);
}
