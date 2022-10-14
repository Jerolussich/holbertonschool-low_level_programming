#include "main.h"
/**
 * _print_rev_recursion - prints a string
 * @s: pointer
 * return: 0
 */
void _print_rev_recursion(char *s)
{


	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
	else
		return;
}
