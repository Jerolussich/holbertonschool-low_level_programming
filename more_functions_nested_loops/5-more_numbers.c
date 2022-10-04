#include "main.h"
/**
 * more_numbers - print from 0 to 14, 14 times
 * Description: print numbers 14 times
 * Return: 0
 **/

void more_numbers(void)
{
	int n = 0;
	int i = 0;

	while (i < 10)
	{
		n = 0;
			for (; n < 15; n++)
			{
				if (n < 15 && 9 < n)
				{
				_putchar(n / 10 + '0');
				}
			_putchar(n % 10 + '0');
			}
		i++;
		_putchar('\n');

	}
}
