#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: value to be changed
 * @index: index of a bit to be changed
 * Return: 1 on success and -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	mask = mask << index;
	if ((*n ^ mask) >= *n)
		return (1);
	*n = *n ^ mask;
	return (1);
}
