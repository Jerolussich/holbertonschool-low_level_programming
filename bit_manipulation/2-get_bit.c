#include "main.h"

/**
 * get_bit - print binary representation of a number
 * @n: unsigned long int n
 * @index: place to check
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return((n & (1 << index)) >> index);
	else
		return (-1);
}
