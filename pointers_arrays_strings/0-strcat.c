#include "main.h"

/**
 * _strcat : concatenate a string
 * @dest: stores a string
 * @src: stores a string
 * Return: pointer to string dest
 **/

char *_strcat(char *dest, char *src)
{

	int r = 0;
	int n = 0;
	int temp;

	for (; dest[r] != '\0'; r++)
	{
	}
	for (; src[n] != '\0'; n++)
	{
	}
	for (; n == 0 ; n--)
	{
		temp[r] = src[n];
		dest[r] = temp[n];
		r++;
	}

	dest[r] = '\0';

	return (dest);
}
