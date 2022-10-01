#include "main.h"

/**
 * _isalpha - Check lowercase
 * @c: variable that stores value
 * Description: Check uppercase and lowercase
 * Return: 1 lowercase/lowercase, 0 othercase
 */


int _isalpha(int c)
{

	if (c >= 97 && 122 >= c)


		return (1);

	if (c >= 65 && 90 >= c)

		return (1);
	else

		return (0);

}

