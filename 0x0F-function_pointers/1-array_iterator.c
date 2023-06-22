#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterates through each element of an array
 * @array: the array we need to go through
 * @size: this is the size of the array
 * @action: this is pointer function to the needed function to be used
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (!array || !action)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
