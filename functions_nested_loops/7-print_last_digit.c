#include "main.h"
/**
 * print_lastdigit - print last digit of a number
 * @a: variable that stores value
 * Description: Print last digit of a number
 * Return: last digit
 */


int print_last_digit(int a)
{	
	int n = a % 10;

	if (n > 0)
	{
		_putchar('0' + n);
		return (n);
	}
	else if (n < 0)
	{
		n = n * -1;
		_putchar('0' + n);
		return (n);
	}
	else
		_putchar(n);
		return (0);
}
