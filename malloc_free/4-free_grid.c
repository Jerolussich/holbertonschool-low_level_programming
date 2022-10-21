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
	for (height = height - 1; height >= 0; height--)
	{
		free(grid[height]);
	}
		free(grid);
}
