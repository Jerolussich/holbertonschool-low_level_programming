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
	int rs = 0;
	int ptr;

	for (; dest[r] != '\0'; r++)
	{
	}
	for (; src[n] != '\0'; n++)
	{
	}
	for (; r == 0 ; r--)
	{
		ptr = dest[r];
		rs++;
	}
	for (; n == 0; n--)
	{
		ptr[rs] = src[n];
		n--;
	}

	dest[r] = '\0';

	return (dest);
}
