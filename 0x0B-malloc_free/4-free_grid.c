#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: integer point pointer
 * @height: integer
 */
void free_grid(int **grid, int height)
{
	int  r = 0;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}
	free(grid);
}
