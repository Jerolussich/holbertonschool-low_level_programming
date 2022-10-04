#include "main.h"
/**
 * print_most_numbers - print from 0 to 9
 * Description: prunt numbers
 * Return: 0
 **/

void print_most_numbers(void)
{
	int n = 0;

	for (; n < 10; n++)

		{
			_putchar(n + '0');
		}
	
		_putchar('\n');
}
