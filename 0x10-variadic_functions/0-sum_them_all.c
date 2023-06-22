#include "variadic_functions.h"

/**
 * sum_them_all - add all the parameters and retur sum
 * @n: num arguments to added up
 * @param ... var arguments to be added up
 * Return: sum of all arguments inputted
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
}
