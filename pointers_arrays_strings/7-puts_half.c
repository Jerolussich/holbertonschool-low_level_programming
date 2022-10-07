#include "main.h"

/**
 * puts_half - print half of a string
 * @str: stores a value
 * Return: returns sums of string
 **/

void puts_half(char *str)
{
	int r = 0;

	while (*str != '\0')
	{
		str++;
		r++;
	}
		str--;
		r--;

	if (r % 2 == 0)

		*str = str* / 2;

		while (*str != '\0')

		{	
		_putchar(*str);
		str++;
		}


	_putchar('\n');
}
