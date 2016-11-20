#include "Node.c"
#include <assert.h>
#include <stdio.h>

static void it_constructs_node_structure()
{
	struct Node * node = Node_construct();
	assert(1 && "it_constructs_node_structure");
}

static void it_destructs_node_structure()
{
	struct Node * node = Node_construct();
	Node_destruct(node);
	assert(1 && "it_destructs_node_structure");
}

int main()
{
	it_constructs_node_structure();
	it_destructs_node_structure();
	return 0;
}


