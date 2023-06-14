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

	lens1 = strlen(s1);
	len = lens1 + strlen(s2);
	p = (char *)malloc(sizeof(s1) + sizeof(s2));
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < len; a++)
	{
		if (a < lens1)
		{
			if (s1[a] == '\0')
			{
				p[a] = ' ';
			}
			else
			{
				p[a] = s1[a];
			}
		}
		else if (a >= lens1)
		{
			if (s2[a - lens1] == '\0')
			    p[a] = ' ';
			p[a] = s2[a - lens1];
		}
	}
	return (p);
}
