#include "Node.c"
#include <assert.h>

void it_constructs_node_structure()
{
	struct Node * node = Node_construct();
	assert(1);
}

int main()
{
	it_constructs_node_structure();
	return 0;
}


