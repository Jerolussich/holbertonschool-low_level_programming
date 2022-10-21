#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *calloc - function that allocates memory for an array 
 * @n: holds an int value
 * @nmemb: array of elements
 * @size: byte size of elements
 * Return: returns pointer of malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(size) * nmemb);
	
	for (i = 0; p[i]; i++)
		memset(p, 0, nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
