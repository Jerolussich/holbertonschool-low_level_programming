#include "main.h"

/**
 * _strlen - count a string 
 * @s: stores a value
 * Return: returns sums of string
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
