struct Unit {
	char * value;
};

struct Unit * Unit_construct();

void Unit_destruct(struct Unit * unit);
