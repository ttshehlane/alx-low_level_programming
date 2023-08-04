#include "main.h"
/**
 * print_binary - converst a unsigned long int to binary
 * @n: the integer that is to be converted
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
	int first_sig_bit = 0;
	char bit;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if (n & mask)
			bit = '1';
		else
			bit = '0';
		if (bit == '1')
			first_sig_bit = 1;
		if (first_sig_bit)
			_putchar(bit);
		mask = mask >> 1;
	}
}
