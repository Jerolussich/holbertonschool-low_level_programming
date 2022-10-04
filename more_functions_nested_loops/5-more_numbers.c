#include "main.h"
/**
 * more_numbers - print from 0 to 14, 14 times
 * @n: variable that stores value
 * @I: variable that stores value
 * Description: print numbers 14 times
 * Return: 0
 **/

void more_numbers(void)
{
	int n = 0;
	int i = 0;

	while (i < 14)
	{
		n = 0;
			for (; n < 14; n++)
			{
				_putchar(n + '0');
				n++;
			}
		i++;
		_putchar('\n');

	}
}
