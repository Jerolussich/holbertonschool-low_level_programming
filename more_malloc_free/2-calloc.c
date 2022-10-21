#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * calloc - function that allocates memory for an array
 * @nmemb: array of elements
 * @size: byte size of elements
 * Return: returns pointer of calloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc((size * nmemb) + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; p[i]; i++)
		memset(p, 0, (size * nmemb));

	return (p);

}
