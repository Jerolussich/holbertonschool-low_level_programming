#include "main.h"

/**
 * set_bit - print binary representation of a number
 * @n: unsigned long int n
 * @index: place to check
 * Return: return 1 or - 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	{
	unsigned long int num = (1 << index);
	unsigned long int  h = *n;

	if (n)
	{
		if (index <= 64)
		{
			*n = num | h;
			return (1);
		}
	}
	return (-1);
	}
}
