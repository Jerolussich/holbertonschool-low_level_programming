#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free 2 dimensional grid.
 * @height: int height of dynamic array
 * @grid: pointer to dynamic array
 * Return: null or pointer
 */

void free_grid(int **grid, int height)
{
	for (height = height - 1; height >= 0; height--)
	{
		free(grid[height]);
	}
		free(grid);
}
