#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: parsed sting gets modified 
 * @src: string will be concatenated along with @dest string
 *
 * Return: Always 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while(dest != '\0')
		a++;
	while(src != '\0')
	{
		*dest[a] = *src[b];
		a++;
		b++;
	}
	*dest[a] = '\0';
	return (dest);
}
