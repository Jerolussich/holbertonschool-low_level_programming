#include "main.h"
/**
 * print_numbers - print from 0 to 9
 * Description: print numbers
 * Return: 0
 **/

void print_numbers(void)
{
	int n = 0;

	for (; n < 10; n++)
	{
		_putchar(n + '0');
	}
		_putchar('\n');

}
