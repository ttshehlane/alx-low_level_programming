#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer int array
 */
int *array_range(int min, int max)
{
	int a, diff, *c;

	if (min > max)
		return (NULL);
	diff = max - min;
	c = (int *)malloc((diff + 1) * sizeof(int));
	if (c == NULL)
		return (NULL);
	for (a = min; a <= max; a++)
		c[a - min] = a;
	return (c);
}
