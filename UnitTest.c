#include "Unit.c"
#include <assert.h>
#include <stdio.h>

static void it_constructs_unit_structure()
{
	struct Unit * unit = Unit_construct();
	assert(NULL == unit->value && "a constructed unit has no value");
}

static void it_destructs_unit_structure()
{
	struct Unit * unit = Unit_construct();
	Unit_destruct(unit);
	assert(1 && "it_destructs_unit_structure");
}

int main()
{
	it_constructs_unit_structure();
	it_destructs_unit_structure();
	return 0;
}
