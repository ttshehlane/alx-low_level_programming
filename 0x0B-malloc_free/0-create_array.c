#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * @size: int
 * @c: char
 * Return: an array of character or Null
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = (char *)malloc(size * sizeof(c));

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		free(p);
		return (p);
	}
}
