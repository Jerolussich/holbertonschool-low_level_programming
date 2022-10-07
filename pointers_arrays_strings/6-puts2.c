#include "main.h"

/**
 * puts2 - print every other character
 * @str: stores a value
 * Return: returns sums of string
 **/

void puts2(char *str)
{


	while (*str != '\0')
	{	
		_putchar(*str);
		str = s + 2;
	}

	_putchar('\n');
}
