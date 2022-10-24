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

	if (min >= 0 && 0 <= max)

		p = malloc(sizeof(int) * (max) + 4);
	if (min < 0 && max > 0)
		p = malloc(sizeof(int) * (max + (min * -1) + 4));
	if (min < 0 && max < 0)
		p = malloc(sizeof(int) * (min - max) * -1 + 4);
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}

	return (p);
}
