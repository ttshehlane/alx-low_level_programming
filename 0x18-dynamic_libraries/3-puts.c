#include "main.h"
/**
 * _puts - writes the string with a trailing newline
 * @str: char to be checked
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
