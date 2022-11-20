#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip to get from one number to another.
 * @n: unsigned long int n
 * @m: unsigned long int m
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int c;

	for (i = 0, c = 0; i < 64; i++)
	{
		if ((n & 1) != (m & 1))
			c++;
		n >>= 1;
		m >>= 1;
	}
	return (c);
}
