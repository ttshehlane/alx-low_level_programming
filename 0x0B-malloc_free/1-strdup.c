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
	unsigned int len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	else{
		strcpy(p, str);/*take note we are copying the strings*/
	} /*if we do this by = it will be pointing to the same address*/
	return (p);
}
