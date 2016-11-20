struct Node {
	struct Entry * head;
};

struct Node * Node_construct();

void Node_destruct(struct Node * node);

struct Node * Node_create(char unitSizeInBytes);

struct Node * Node_createFirst(char unitSizeInBytes);
