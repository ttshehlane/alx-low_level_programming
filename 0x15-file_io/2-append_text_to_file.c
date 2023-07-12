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
 * append_text_to_file - appends text at the end of a file
 * @filename: filename to be appended
 * @text_content: content to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	n_written = write(fd, text_content, _strlen(text_content));
	if (n_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
