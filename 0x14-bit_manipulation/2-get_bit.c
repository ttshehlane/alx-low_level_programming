#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @n: value to be converted to binary
 * @index: the position of the bit to be retrieved
 * Return: the value of the bit at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int nbits = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	if (index > nbits)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) >> index);
}
