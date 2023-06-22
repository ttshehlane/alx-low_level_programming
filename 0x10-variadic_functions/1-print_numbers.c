#include "variadic_functions.h"

/**
 * print_numbers - prints numbers follewd by newline
 * @separator: string that will be printed between the num
 * @n: constant num of int to be passed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	
	va_start(ap, n);
	
	if (n == 0)
		return;
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(ap, int));
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if(i < n - 1)
				printf("%s",separator);
		}
		printf("\n");
	}
	va_end(ap);
}
