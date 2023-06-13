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
	char *p = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (p);
	}
	else
	{
		p = (char *)malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	return (p);
}
