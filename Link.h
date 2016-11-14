struct Link {
	struct Unit * position;
	struct Unit * destination;
};

struct Link * Link_construct();

void Link_destruct(struct Link * link);
