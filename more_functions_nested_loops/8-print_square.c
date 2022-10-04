#include "main.h"
/**
 * print_square - print square
 * @size: variable that stores value
 * Description: print square
 * Return: 0
 **/

void print_square(int size)
{
	int p = 0;
	int i = 0;

	while (i < size)
	{
		p = 0;

		while (size > p)
		{
			_putchar('#');
			_putchar('\n');
			p++;
		}
	i++;

	}
	if (size <= 0)
	{
		_putchar('\n');
	}

}
