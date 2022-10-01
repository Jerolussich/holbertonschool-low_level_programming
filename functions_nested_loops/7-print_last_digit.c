#include "main.h"
/**
 * _lastdigit - print last digit of a number
 * @a: variable that stores value
 * Description: Print last digit of a number
 * Return: last digit
 */


int print_last_digit(int a)
{	
	int n = a % 10;
	char c = n;
	
	_putchar(c);
	return (n);

}
