#include <main.h>
#include <string.h>
/**
 * *strncat - concatenates two strings
 * @dest:parsed sting gets modified
 * @src: string will be concatenated along with @dest string
 * @n: number of times to iterate
 *
 * Return: Always 0 (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
