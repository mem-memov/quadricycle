#include "Unit.h"
#include <stdlib.h>

struct Unit * Unit_construct()
{
	struct Unit * unit = malloc(sizeof(struct Unit));

	unit->value = NULL;

	return unit;
}

void Unit_destruct(struct Unit * unit)
{
	if (NULL != unit->value) {
		free(unit->value);
	}

	free(unit);
}

