#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define MAXSIZE 1024

/**
* error_exit - Print error messages and exits with given status code.
* @msg: Error message.
* @exit_code: Status code to exit with.
* @fd: File descriptor (for cases where applicable)
* Return: Void
*/
void error_exit(char *msg, int exit_code, int fd)
{
	if (fd != 0)
		dprintf(STDERR_FILENO, "%s %d\n", msg, fd);
	else
		dprintf(STDERR_FILENO, "%s\n", msg);
	exit(exit_code);
}

/**
* copy_content - Copy content from source to destination file.
* @src_fd: Source file descriptor.
* @dest_fd: Destination file descriptor.
* Return: Void
*/
void copy_content(int src_fd, int dest_fd)
{
	ssize_t bytes_read, bytes_written;
	char buffer[MAXSIZE];

	while ((bytes_read = read(src_fd, buffer, MAXSIZE)) != 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_read == -1 || bytes_written != bytes_read)
		{
			close(src_fd);
			close(dest_fd);
			error_exit("Error: Can't write to", 99, 0);
		}
	}

	if (bytes_read == -1)
	{
		close(src_fd);
		close(dest_fd);
		error_exit("Error: Can't read from file", 98, 0);
	}

	if (close(src_fd) == -1 || close(dest_fd) == -1)
		error_exit("Error: Can't close file descriptor", 100, 0);
}

/**
* main - Copy the content of one file to another.
* @ac: Argument count.
* @av: Argument vector.
* Return: 0 on success, appropriate error code on failure.
*/
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
		error_exit("Usage: cp file_from file_to", 97, 0);

	fd_from = open(av[1], O_RDONLY);

	if (fd_from == -1)
		error_exit("Error: Can't read from file", 98, 0);

	fd_to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (fd_to == -1)
		error_exit("Error: Can't write to", 99, 0);

	copy_content(fd_from, fd_to);

	return (0);
}
