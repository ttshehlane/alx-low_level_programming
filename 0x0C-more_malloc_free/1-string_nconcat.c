#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * memAssign - assigns memory and returns pointer
 * @s1: pointer
 * @s2: pointer
 * @s1Len: integer
 * @numByte: nth byte to print
 * @n: integer of memmory to be allocated
 * Return: pointer
 */
char *memAssign(char *s1, char *s2, int s1Len, int numByte, unsigned int n)
{
	char *c;
	int count = 0;

	c = (char *)malloc(n);
	if (c == NULL)
		return (NULL);
	for (count = 0; count < (s1Len + numByte); count++)
	{
		if (count < s1Len)
			c[count] = s1[count];
		else
			c[count] = s2[count - s1Len];
	}
	c[s1Len + numByte] = '\0';
	return (c);
}

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
	unsigned int s1Len, s2Len;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
	{
		s2 = " ";
		n = 1;
	}
	s1Len = strlen(s1);
	s2Len = strlen(s2);
	if (n >= s2Len)
	{
		c = memAssign(s1, s2, s1Len, s2Len, ((s1Len + s2Len + 1) * sizeof(char)));
	}
	else
	{
		c = memAssign(s1, s2, s1Len, n, ((s1Len + n + 1) * sizeof(char)));
	}
	return (c);
}
