#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimensional array
 * @width: int width array
 * @height: int height array
 * Return: null or pointer
 */

int **alloc_grid(int width, int height)
{
	int **p = NULL;
	int i = 0, j = 0;

		if (width < 1 || height < 1)
			return (NULL);
		p = malloc(sizeof(*p) * (height));
		if (p == NULL)
			return (NULL);
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(sizeof(int) * width);
			if (p[i] == NULL)
			{
				for (i = i - 1; i >= 0; i--)
					free(p[i]);
				free(p);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				p[i][j] = 0;
			}
		}
		return (p);
}
