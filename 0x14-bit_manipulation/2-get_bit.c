#include "main.h"

/**
 * get_bit - returns a value of a bit at a given index
 * @n: integer value
 * @index: integer value of the bit to be retrieved
 * Return: will return value of bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	mask = mask << index;
	if (n & mask)
		return (1);
	return (0);
}
