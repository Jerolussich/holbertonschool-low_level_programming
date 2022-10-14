#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (0);
	}
	else
		return (n / _sqrt_recursion(n));
}
