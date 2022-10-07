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

	while (*str != '\0')
	{
		str++;
		r++;
	}
		str--;
		r--;

	if (r % 2 == 0)
	{

		*str = r / 2;

		while (*str != '\0')

		{	
		_putchar(*str);
		str++;
		}
	}
	if (r % 2 != 0)
	{
		str* = str* - n;

		while (n > 0)

			_putchar(*str);
			str++;
			n--;

	_putchar('\n');
}
