#include "main.h"

/**
 * reset_to_98 - set number using pointer
 * @*n: stores a value
 **/

void reset_to_98(int *n)
{
	int *p = &*n;

	*p = 98;
}
