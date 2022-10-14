#include "main.h"
/**
 * _print_rev_recursion - prints a string
 * @s: pointer
 * return: 0
 */
void _print_rev_recursion(char *s)
{

int i = 0;

	if (*s != '\0' && i != 1)
	{
		s++;
		_print_rev_recursion(s);
	}
	if (*s == '\0')
	{
		i = 1;
		s--;
		_putchar(*s);
		_print_rev_recursion(s);
	}
	else
		_putchar(*s);


}
