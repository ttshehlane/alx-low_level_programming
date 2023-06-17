#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: int
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int s1Len, s2Len, count;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	s1Len = strlen(s1);
	s2Len = strlen(s2);
	if (n >= s2Len)
	{
		c = (char *)malloc((s1Len * s2Len * sizeof(char)) + 1);
		if (c == NULL)
			return (NULL);
		for (count = 0; count < (s1Len + s2Len); count++)
		{
			if (count < s1Len)
				c[count] = s1[count];
			else
				c[count] = s2[count - s1Len];
		}
		c[s1Len + s2Len] = '\0';
	}
	else
	{
		c = (char *)malloc((s1Len * n * sizeof(char)) + 1);
		if (c == NULL)
			return (NULL);
		for (count = 0; count < (s1Len + n); count++)
		{
			if (count < s1Len)
			{
				c[count] = s1[count];
			}
			else
				c[count] = s2[count - s1Len];
		}
		c[s1Len + n] = '\0';
	}
	return (c);
}
