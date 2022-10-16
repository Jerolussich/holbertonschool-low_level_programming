#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(1, n));
}
/**
 * _sqrt_recursion2 - find square root
 * @i: base
 * @n:number to find square root
 * Return: square root or -1
 **/
int _sqrt_recursion2(int i, int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (i == n)
	{
		return (1);
	}

	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_recursion2(i + 1, n));
	}
}
