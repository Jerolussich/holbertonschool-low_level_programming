#include "main.h"

/**
 * _puts - print char
 * @str: stores a value
 * Return: returns sums of string
 **/

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
