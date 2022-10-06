#include "main.h"

/**
 * print_rev - print char in reverse
 * @s: stores a value
 * Return: returns sums of string
 **/

void print_rev(char *s)
{

	int r = 0;

	while (*s != '\0')
	{
		s++;
		r++;
	}
		while (r > 0)
		{
		_putchar(*s);
		r--;
		}

_putchar('\n');

}
