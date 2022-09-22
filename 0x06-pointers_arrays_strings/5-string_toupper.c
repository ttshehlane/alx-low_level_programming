#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: accepts the pointer to be changed to upper case
 *
 * Return: Always 0 (success)
 */
char *string_toupper(char *str)
{
	int i = 0;
	delt = 'a' - 'A';

	while (str[i])
	{
		if ((str[i] >= 'a') && s(tr[i] <= 'z'))
			str[i] -= delt;
		i++
	}
	return (str);
}
