#include "main.h"

/**
 * _strcat - concatenate a string
 * @dest: stores a string
 * @src: stores a string
 * Return: pointer to string dest
 **/

char *_strcat(char *dest, char *src)
{

	int i = 0;
	int j = 0;
	char p;

	for (; dest[i] != '\0'; i++)
	{
		p[j] = dest[i];
		j++;
	}
	i = 0;

	for (; src[i] != '\0'; i++)
	{
		p[j] = src[i];
		j++;
	}
	p[j] = '\0';

	return (dest);
}
