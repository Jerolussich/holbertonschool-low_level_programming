#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *p = NULL;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * max + 4);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}

	return (p);
}
