#include "main.h"
#include <string.h>
/**
 * _strncpy - copys text from one array to another
 * @dest: the text variable to be modified
 * @src: the text that will be used to modify @dest
 * @n:the size of src, which will control the num times of iteration
 *
 * Return: Always 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
