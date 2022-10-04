#include "main.h"
/**
 * print_triangle - print triangle
 * @size: variable that stores value
 * Description: print square
 * Return: 0
 **/

void print_triangle(int size)
{
	int i = 0;
	int s = 1;
	int bs = 1;

	while (i < size)
	{
		
		{
			while (s >= bs)
			{
				_putchar('#');
				bs++;
			}
		}


	_putchar('\n');
	i++;
	s = s + bs;

	}
	if (size <= 0)
	{
		_putchar('\n');
	}

}
