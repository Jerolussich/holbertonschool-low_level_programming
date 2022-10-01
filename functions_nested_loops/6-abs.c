#include "main.h"
/**
 * _abs - print absolute of number
 * @a: variable that stores value
 * Description: Print absolute number
 * Return: absolute number
 */


int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}

	else if (a > 0)
	{
		return (a);
	}
	else
		return (0);

}
