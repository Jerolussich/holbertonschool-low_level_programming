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
	int *ptr = 0;
	int ptrl = 0;

	for (; dest[r] != '\0'; r++)
	{
	}
	for (; src[n] != '\0'; n++)
	{

	}
	for (; r == 0 ; r--)
	{
		ptr[ptrl] = dest[r];
		ptrl++;
	}
	for (; n == 0 ; n--)
	{
		ptr[ptrl + n] = src[n];
		n--;
	}

	dest[r] = '\0';

	return (dest);
}
