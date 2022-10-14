#include "main.h"
/**
 * _pow_recursion - return the vale of x raised to the power of y
 * @x: number
 * @y: number
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int z = x;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(z, y - 1));
}
