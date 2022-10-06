#include "main.h"

/**
 * reset_to_98 - set number using pointer
 **/

void reset_to_98(int *n)
{
	int *p = &*n;

	*p = 98;
}
