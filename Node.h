struct Node {
	struct Entry * head;
};

struct Node * Node_construct();

void Node_destruct(struct Node * node);
