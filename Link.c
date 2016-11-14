#include "Link.h"
#include "Unit.h"
#include <stdlib.h>

struct Link * Link_construct()
{
	struct Link * link = malloc(sizeof(struct Link));

	link->position = Unit_construct();
	link->destination = Unit_construct();

	return link;
}

void Link_destruct(struct Link * link)
{

}
