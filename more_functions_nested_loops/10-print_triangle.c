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
	int p = 0;
	int sp = 0;

	while (i < size)
	{
		sp = 0;
			while (sp != p)
			{
				_putchar(' ');
				s++;
			}	
			while (s >= bs)
			{
				_putchar('#');
				bs++;
			}



	_putchar('\n');
	i++;
	s = s + (i + 1);

	}
	if (size <= 0)
	{
		_putchar('\n');
	}

}
