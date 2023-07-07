#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: array of char
 * Return: unsigned int to represent a decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, num = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] == '1')
			num = (num << 1) | 1;
		else if (b[i] == '0')
			num = num << 1;
		else
			return (0);
		i++;
	}
	return (num);
}
