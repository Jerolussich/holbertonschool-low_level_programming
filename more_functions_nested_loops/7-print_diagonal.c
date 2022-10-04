#include "main.h"
/**
 * print_line - print from 0 to 14, 14 times
 * @n: variable that stores value
 * Description: print numbers 14 times
 * Return: 0
 **/

void print_diagonal(int n)
{
	int p = 0;
	int s = 0;

	while (p < n)
	{

		s = 0;

		while (s != p)
		{
			_putchar(' ');
			s++;
		}
			

					
				if (n > p)
				{
					_putchar(92);
					_putchar('\n');
					p++;
				}
				if (n < p)
				{
					_putchar('\n');
					p = 0;
				}
	}
				
}
