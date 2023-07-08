#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to a number
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult = n ^ m;
	unsigned int i = 0;

	while (xorResult != 0)
	{
		xorResult &= xorResult - 1;
		i++;
	}
	return (i);
}
