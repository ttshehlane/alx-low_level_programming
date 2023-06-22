#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: the array of integers
 * @size: number of elements in the array
 * @cmp: pointer funtion used to compare val
 * Return: -1 if val matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (!array || size <= 0 || !cmp)
		return (-1);
	for (a = 0; a < size; a++)
		if (cmp(array[a]))
			break;
	return (a);
}
