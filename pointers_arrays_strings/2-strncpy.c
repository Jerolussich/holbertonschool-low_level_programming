#include "main.h"

/**
 * _strncpy - concatenate a string
 * @dest: stores a string
 * @src: stores a string
 * @n: stores a number of bytes
 * Return: pointer to string dest
 **/

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
