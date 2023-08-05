#include "main.h"

/**
 * flip_bits - finds num bits needed to flip
 * @n: integer value flip from
 * @m: integer value flip to
 * Return: num bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		xor_result = xor_result & (xor_result - 1);
		i++;
	}
	return (i);
}
