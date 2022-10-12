#include "main.h"
#include <stdio.h>
/**
 * _memset - fill memory with constante byte
 * @dest: pointer
 * @src: pointer
 * @n: bytes from area src
 * Return: dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
