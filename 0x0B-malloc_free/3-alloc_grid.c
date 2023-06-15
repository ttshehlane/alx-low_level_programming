#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: integer
 * @height: integer
 * Return: 2d pointer of integers
 */
int **alloc_grid(int width, int height)
{
	int r, c = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (r = 0; r < height; r++)
	{
		p[r] = (int *)malloc(width * sizeof(int));
		if (p[r] == NULL)
		{
			free(p[r]);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			p[r][c] = 0;
	}
	return (p);
}
