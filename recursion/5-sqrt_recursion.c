#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	_sqrt_recursion(n);
	return (n);
}
int _sqrt_recursion2(int i, int n)
{
	
	if (i == n)
	{
		return (-1);
	}

	else if (i * i == n)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion2(i + 1, n));
	}
}
