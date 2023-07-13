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
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
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
	int fd_from, fd_to, bytes_written, bytes_read;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	check_read(fd_from, argv[1]);
	bytes_read = read(fd_from, buff, sizeof(buff));
	check_read(bytes_read, argv[1]);
	buff[bytes_read] = '\0';
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_write(fd_to, argv[2]);
	bytes_written = write(fd_to, buff, bytes_read);
	check_write(bytes_written, argv[2]);
	check_close(fd_to);
	check_close(fd_from);
	return (1);
}
