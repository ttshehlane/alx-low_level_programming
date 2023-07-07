#include "main.h"

/**
 * print_binary - prints a binary value of a number
 * @n: the value to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int first_non_zerobit = 0;
	char bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{/*checking if remaind will be 0 or 1*/
		if (n & mask)
			bit = '1';
		else
			bit = '0';
		if (bit == '1')
			first_non_zerobit = 1;
		if (first_non_zerobit)
			_putchar(bit);
		mask >>= 1;
	}
}
