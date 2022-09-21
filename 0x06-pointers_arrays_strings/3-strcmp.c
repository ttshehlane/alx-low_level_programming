#include "main.h"
#include <string.h>

/**
 * _strcmp - a funtion that compare two string
 * @s1: variable to be compared with @s2
 * @s2: variable to be compared with @s1
 *
 * Return: Always 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	if (s1 == s2)
		i = 0;
	if (s1 < s2)
		i = -15;
	if (s1 > s2)
		i = 15;
	return (i);
}
