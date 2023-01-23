#include "main.c"

/**
 * _isupper - checks if a character is upper
 *
 * Description: Prints the the input with _putchar
 * @c: integer
 * Return: int
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
