#include "main.h"

/**
 * swap_int - swap number
 * @a: stores a value
 * @b: stores a value
 **/

int _strlen(char *s)
{
	int sum = 0;

	while (*s != '\0')
	{
		sum++;	
		s++;
	}

	return (sum);
}
