#include "main.h"

/**
 * reset_to_98 - set number using pointer
 * @n: stores a value
 **/

void swap_int(int *a, int *b)
{
	int *p = &*a;
	int *p1 = &*b;

	*p1 =*a;
	*p  =*b;
}
