#include "Link.h"
#include <stdlib.h>

struct Link * Link_construct()
{
	struct Link * link = malloc(sizeof(struct Link));

	return link;
}

void Link_destruct(struct Link * link)
{

}
