#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a pointer to a newly allocated space in memory
 * @str: string one
 * Return: string or NULL
 */
char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(strlen(str) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, str);/*take note we are copying the strings*/
	return (p);
}
