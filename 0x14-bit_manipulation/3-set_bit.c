#include "main.h"

/**
 * set_bit - sets the values of a bit to 1 at a given index
 * @n: address of the integer value to be changed
 * @index: index of the bit to be changed
 * Return: 1 on success and -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	mask = mask << index;
	*n = *n | mask;
	return (1);
}
