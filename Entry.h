#include "Link.h"

struct Entry {
	struct Link outside;
	struct Link inside;
};

struct Entry * Entry_construct();

void Entry_destruct(struct Entry * entry);
