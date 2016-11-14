#include "Node.h"
#include <stdlib.h>

struct Node * Node_construct()
{
	struct Node * node = malloc(sizeof(struct Node));

	return node;
}

void Node_destruct(struct Node * node)
{

}
