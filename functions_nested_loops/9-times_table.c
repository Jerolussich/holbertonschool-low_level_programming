#include "main.h"
/**
 * times_table - print table of 9
 * Description: Print table of 9
 * Return: table of 9
 */


void times_table(void)
{
	int i = 0;
	int b = 0;
	int m = 0;

	while (i < 10)
	{
	
		m = 0;

		while (m < 10)
		{
			int bm = b * m;

			if (bm <= 9)
			{
				if (m !=0)
					_putchar(' ');
				_putchar(bm + '0');


				m++;
			}
			if (bm >= 10)
			{
				_putchar((bm / 10) + '0');
				_putchar((bm % 10) + '0');
				m++;
			}
			if (m <= 9)
			{
			_putchar(',');
			_putchar(' ');
			}	
		}
		
		_putchar('\n');
		i++;
		b++;
	}
}
