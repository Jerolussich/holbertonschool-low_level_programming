#include "main.h"

/**
 * swap_int - swap number
 * @a: stores a value
 * @b: stores a value
 **/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
