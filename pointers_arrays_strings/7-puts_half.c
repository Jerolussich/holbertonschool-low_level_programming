#include "main.h"

/**
 * puts_half - print half of a string
 * @str: stores a value
 * Return: returns sums of string
 **/

void puts_half(char *str)
{
	int r = 0;
	int n = (r - 1) / 2;

	for (; str[r] != '\0'; r++)
	{
	}

	if (r % 2 == 0)
	{
		r = r / 2;

		while (str[r] != '\0')

		{
		_putchar(str[r]);
		r++;
		}
	}
	if (r % 2 != 0)
	{
		r = r -n;

		while (str[r] != '\0')
		{
			_putchar(str[r]);
			str++;
		}
	}
		_putchar('\n');
}
