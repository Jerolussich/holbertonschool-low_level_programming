#include "main.h"
#include <stdio.h>
/**
 * _memset - fill memory with constante byte
 * @s: pointer
 * @n: first n bytes to fill
 * @b: constante byte
 * Return: 0
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
