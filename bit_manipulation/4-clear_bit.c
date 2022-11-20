#include "main.h"

/**
 * set_bit - print binary representation of a number
 * @n: unsigned long int n
 * @index: place to check
 * Return: return 1 or - 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n)
	{
		if (index <= 64)
		{
			*n &= ~(1 << index);
			return (1);
		}
	}
	return (-1);
}
