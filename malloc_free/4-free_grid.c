#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free 2 dimensional grid.
 * @width: int width array
 * @height: int height array
 i Return: null or pointer
 */

void free_grid(int **grid, int height)
{
	int i = 0;
	
	if (grid[i] == NULL)
	{
		for (i = i - 1; i >= 0; i--)
		free(grid[i]);
	}
	free(grid);
	return (NULL);
}
