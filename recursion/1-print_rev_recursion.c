#include "main.h"
/**
 * _print_rev_recursion - prints a string
 * @s: pointer
 * return: 0
 */
void _print_rev_recursion(char *s)
{

int i = 0;
int j = 0;

	if (*s != '\0' && i != 1)
	{
		s++;
		j++;
		_print_rev_recursion(s);
	}
	if (*s == '\0')
	{
		i = 1;
		s--;
		_putchar(*s);
		_print_rev_recursion(s);
	}
	else if (j >= 0)
	{
		_putchar(*s);
		j--;
		s--;
		_print_rev_recursion(s);
		
	}


}
