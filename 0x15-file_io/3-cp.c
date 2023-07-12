#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: string arguments
 * Return: Always 0 on success
 */
int main(int argc, char*argv[])
{
	int fd_from, fd_to, bytes_written, bytes_read;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	bytes_read = read(fd_from, buff, sizeof(buff));
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		if(close(fd_from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		exit(98);
	}
	buff[bytes_read] = '\0';
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		if(close(fd_from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		exit(99);
	}
	bytes_written = write(fd_to, buff, bytes_read);
	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		if(close(fd_to) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
			if(close(fd_from) == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
				exit(100);
			}
			exit(100);
		}
		if(close(fd_from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		exit(98);
	}
	if(close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		if(close(fd_from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			exit(100);
		}
		exit(100);
	}
	if(close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (1);
}
