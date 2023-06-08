#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: Interger
 * Return: Integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
