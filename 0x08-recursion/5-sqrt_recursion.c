#include "main.h"

/**
 * _sqrt_helper - helper function return integer
 * @n: integer
 * @start: integer
 * @end: integer
 * Return: integer
 */
int _sqrt_helper(int n, int start, int end)
{
	if (start > end)
	{
		if (n == 1)
		{
			return (1);
		}
		else
		{/* The number does not have a natural square root */
			return (-1);
		}
	}
	else
	{
		int mid = start + (end - start) / 2;
		int square = mid * mid;

		if (square == n)
		{
			return (mid); /* Square root found */
		}
		else if (square > n)
		{/* Search in the lower half of the range */
			return (_sqrt_helper(n, start, mid - 1));
		}
		else
		{/* Search in the upper half of the range */
			return (_sqrt_helper(n, mid + 1, end));
		}
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Integer
 * Return: integer that is a natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{/* The number does not have a natural square root */
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, 1, n / 2));
	}
}
