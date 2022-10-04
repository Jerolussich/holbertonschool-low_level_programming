#include "main.h"
/**
 * more_numbers - print from 0 to 14, 14 times
 * @n: variable that stores value
 * @I: variable that stores value
 * Description: print numbers 14 times
 * Return: 0
 **/

void print_line(int n)
{
	int p= 0;

	while (p < n)
	{	
		if (n > p)
		{	
		_putchar('_');
		p++;

		}

	_putchar('\n');

	}
}
