#include "main.h"

/**
 * _strcat - concatenate a string
 * @dest: stores a string
 * @src: stores a string
 * Return: pointer to string dest
 **/

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;


	for (; dest[i] != '\0'; i++)
	{
	}

	for (; n != j; && src[i] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
