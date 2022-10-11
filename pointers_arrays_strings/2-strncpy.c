#include "main.h"

/**
 * _strncat - concatenate a string
 * @dest: stores a string
 * @src: stores a string
 * @n: stores a number of bytes
 * Return: pointer to string dest
 **/

char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

	for (; dest[i]; i++)
	{
	}
	for (; src[j] != src[n]; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
