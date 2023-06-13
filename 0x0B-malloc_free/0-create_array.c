#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: int
 * @c: char
 * Return: an array of character or Null
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(c)); 
	unsigned int i;

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
		
		return (p);
	}
}
