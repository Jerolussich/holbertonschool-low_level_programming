#include "main.h"
/**
 * print_square - print diagonal with spaces
 * @n: variable that stores value
 * Description: print numbers 14 times
 * Return: 0
 **/

void print_square(int size)
{
	int p = 0;
	int i = 0;

	while (i < size)
	{

		while (size > p)
		{
			_putchar('#');
			p++;
		}
	i++;

	}
	if (size <= 0)
	{
		_putchar('\n');
	}

}
