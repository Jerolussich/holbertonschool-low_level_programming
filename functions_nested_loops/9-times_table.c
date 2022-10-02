#include "main.h"
/**
 * times_table - print table of 9
 * Description: Print table of 9
 * Return: table of 9
 */


void times_table(void)
{
	int i = 0;
	int s = 0;
	int b = 0;

	while (i <= 10)
	{

	int m = 0;

		while (m <= 10)
		
			if (m <= 9)
			{
			_putchar(b);
			_putchar(',');
			_putchar(" ");
			_putchar((b + b));
			m++
			b = (b + b);
			}

			if (m == 10)
			{
			_putchar(b + b);
			}
	_putchar('\n')
	b = 0
	i++
	b++
	}
}
