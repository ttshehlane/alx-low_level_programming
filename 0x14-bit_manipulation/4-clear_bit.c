#include "main.h"

/**
 * clear_bit - sets the nth/index bit to 0
 * @n: the value which it bit will be cleared
 * @index: the nth index of the bit to be cleared
 * Return: 1 for sucess and -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~mask;
	return (1);
}
