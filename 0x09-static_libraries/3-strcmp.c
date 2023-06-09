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
	int a;
	int b = 0;

	for (a = 0; s1[a] != '\0' && b == 0; a++)
		b = s1[a] - s2[a];
	return (b);
}
