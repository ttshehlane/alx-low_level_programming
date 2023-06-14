#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: Pointer of strings
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len, lens1, a = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";

	lens1 = strlen(s1);
	len = lens1 + strlen(s2);
	p = (char *)malloc(sizeof(s1) + sizeof(s2) + 1);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < strlen(s1); a++)
		p[a] = s1[a];
	for (a = lens1; a < len; a++)
		p[a] = s2[a - lens1];
	p[len] = '\0';
	return (p);
}
