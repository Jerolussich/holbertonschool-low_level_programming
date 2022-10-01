#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: variable that stores value
 * Description: Print the sign of a number
 * Return: Sign of numbers and returns 
 */


int print_sign(int n)
{

	if (n > 0)
		
		_putchar(43);
		_putchar(44);
		_putchar(n);
		return (1);

	if (n < 0)
		_putchar(45);
		_putchar(44);
		_putchar(n);
		return (-1);

	else
		_putchar(0);
		_putchar(44);
		_putchar(n);
		return (0);
		

}

