#include "main.h"

/**
 * _strlen - calculates the string length
 * @str: the string to be calculated
 * Return: returns an integer
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: file name of file to be created
 * @text_content: contents of the file
 * Return: 1 on success and -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		n_written = write(fd, text_content, _strlen(text_content));
		if (n_written == -1)
		{	
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
