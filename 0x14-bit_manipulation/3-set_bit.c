#include "main.h"

/**
 * set_bit - sets of a value to 1 at a given index
 * @n: value that needs to be changed
 * @index: the index of the bit to be changed
 * Return: 1 for success and -1 for an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | mask;
	return (1);
}
