#include "main.h"

/**
 * puts_half - print half of a string
 * @str: stores a value
 * Return: returns sums of string
 **/

void puts_half(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
		str--;

		if (*str % 2 == 0)

			while (*str != '\0')

			{	
			_putchar(*str);
			str++;
			}
	}

	_putchar('\n');
}
