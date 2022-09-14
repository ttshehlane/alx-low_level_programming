#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int lastDigit;

	lastDigit = (nld % 10);

	if (lastDigit < 0)
	{
		lastDigit = (-1 * lastDigit);
	}


	_putchar(lastDigit + '0');
	return (lastDigit);
}
