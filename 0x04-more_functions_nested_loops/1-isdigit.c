#include "main.h"

/**
 * _isdigit - checks if a character is upper
 *
 * Description: Prints the the input with _putchar
 * @c: integer
 * Return: int
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
