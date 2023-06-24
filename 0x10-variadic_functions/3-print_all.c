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
	unsigned int c = 0, skip;
	char *str;
	
	va_start(all, format);
	while (format[c] && format == NULL)
	{
		skip = 2;
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
			skip = 0;
			break;
		}
		if (skip && format[c + 1])
			printf(", ");
		c++;
	}
	va_end(all);
	printf("\n");
}
