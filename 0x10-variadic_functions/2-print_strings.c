#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: print the string separator
 * @n: the number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
