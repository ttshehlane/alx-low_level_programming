#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of all types of arguments passed
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int c = 0;
	char *str;

	va_start(all, format);
	c = 0;
	while (format[c])
	{
		switch (format[c])
		{
		case 'c':
			printf("%c", va_arg(all, int));
			break;
		case 'i':
			printf("%d", va_arg(all, int));
			break;
		case 'f':
			printf("%f", va_arg(all, double));
			break;
		case 's':
			str = va_arg(all, char *);
			if (str != NULL)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			break;
		}
		c++;
	}
	va_end(all);
	printf("\n");
}
