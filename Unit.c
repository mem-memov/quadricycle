#include "Unit.h"
#include <stdlib.h>

struct Unit * Unit_construct()
{
	struct Unit * unit = malloc(sizeof(struct Unit));

	return unit;
}

void Unit_destruct(struct Unit * unit)
{
	free(unit->value);
	free(unit);
}

