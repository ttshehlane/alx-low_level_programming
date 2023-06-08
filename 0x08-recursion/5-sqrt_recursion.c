#include "main.h"

/**
 * _sqrt_helper - helper function return integer
 * @n: integer
 * @i: integer
 * @srt: integer
 * Return: integer
 */
int _sqrt_helper(int n, int i, int srt)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (srt);
	}
	else
	{
		return (_sqrt_helper(n - i, i + 2, srt + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Integer
 * Return: integer that is a natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1, 0));
}
