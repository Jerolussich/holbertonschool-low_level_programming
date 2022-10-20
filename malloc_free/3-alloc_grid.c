#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer of a string
 * @s2: pointer of a string
 * Return: null or new pointer
 */

int **alloc_grid(int width, int height)
{
	int **p = NULL;
	int i = 0, j = 0;

		if (width < 1)
		{
			return (NULL);
		}
		if (height < 1)
		{
			return (NULL);
		}

		*p = malloc(sizeof(int) * (height));

		for(i = 0; i < height; i++)
		{
			p[i] = malloc(sizeof(int) * width);
		}

		if (*p == NULL)
		{
			return (NULL);
		}
		
		for (;i < height; i++)
		{
			p[i][j] = 0;

			for (; j < width; j++)
			{
				p[i][j] = 0;
			}
			j = 0;

		}

		return (p);

}
