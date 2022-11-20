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

	cout << "0";
	for (i = 1 << 30; i > 0; i = i / 2)
	{
		if((n & i) != 0)
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
}
