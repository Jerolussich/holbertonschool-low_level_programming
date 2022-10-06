#include "main.h"

/**
 * puts - count a string
 * @str: stores a value
 * Return: returns sums of string
 **/

void _puts(char *str)
{
	int s = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		s++;
	}

}
