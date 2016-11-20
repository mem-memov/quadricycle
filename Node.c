#include "Node.h"
#include "Entry.c"
#include <stdlib.h>

struct Node * Node_construct()
{
	struct Node * node = malloc(sizeof(struct Node));

	node->head = Entry_construct();

	return node;
}

void Node_destruct(struct Node * node)
{
	
}

struct Node * Node_createFirst(char unitSizeInBytes)
{
	
}
