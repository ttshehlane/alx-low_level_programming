#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
/**
 * check_read - checks if reading the file was a success
 * @fd: file descriptor
 * @filename: file name
 * Return: always 0
 */
void check_read(int fd, char *filename)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}
/**
 * check_write - checks if writing the file was a success
 * @fd: file descriptor
 * @filename: file name
 * Return: always 0
 */
void check_write(int fd, char *filename)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
/**
 * check_close - checks if closing the file was a success
 * @fd: file descriptor
 * Return: always 0
 */
void check_close(int fd)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * copy_contents - copies the content buffer by buffer
 * @fd_from: source file
 * @fd_to: destination file
 * @file_from: source file name
 * @file_to: destination file name
 * Return: always 0
 */
void copy_contents(int fd_from, int fd_to, char *file_from, char *file_to)
{
	int bytes_read = 1, bytes_written, count;
	char buff[1024];

	while (bytes_read != 0)
	{
		bytes_read = read(fd_from, buff, sizeof(buff));
		check_read(bytes_read, file_from);

		bytes_written = 0;
		while (bytes_written < bytes_read)
		{
			count = write(fd_to, buff + bytes_written, bytes_read - bytes_written);
			check_write(count, file_to);
			bytes_written += count;
		}
	}
}
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: string arguments
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_from, close_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	check_read(fd_from, argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_write(fd_to, argv[2]);

	copy_contents(fd_from, fd_to, argv[1], argv[2]);

	close_to = close(fd_to);
	check_close(close_to);
	close_from = close(fd_from);
	check_close(close_from);
	return (0);
}
