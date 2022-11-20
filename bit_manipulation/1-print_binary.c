#include "main.h"
#include <stddef.h>

/**
 * print_binary - print binary representation of a number
 * @b: binary number
 * Return: value of int
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;

	    for (i = 1 << 31; i > 0; i = i / 2)
		(n & i) ? printf("1") : printf("0");
}
