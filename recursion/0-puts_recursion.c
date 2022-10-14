#include "main.h"
/**
 *
 *
 */
void _puts_recursion(char *s)
{
	_putchar(s)

	if (s != '\0')
	{
		_put_recursion(s);
	}
}	
