#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name as char
 * @letters: number of letters to read and print
 * Return: Number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	unsigned int count = 0;
	char *ch;

	if (filename == NULL)
		return (0);
	ch = malloc(letters + 1);
	fptr = fopen(filename,"r");
	if (fptr == NULL || ch == NULL)
		return (0);

	if (fgets (ch, letters, fptr) != NULL)
	{
		while (ch[count] != '\0')
		{
			_putchar(ch[count]);
			count++;
		}
	}
	free(ch);
	fclose(fptr);
	return (count);
}
