#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h> /* Add this header for strerror */
#include "main.h"

#define MAXSIZE 1024

/**
* error_exit - Print error messages and exits with given status code.
* @msg: Error message.
* @exit_code: Status code to exit with.
* @filename: Name of the file associated with the error.
* Return: Void
*/
void error_exit(char *msg, int exit_code, const char *filename)
{
	if (filename)
		dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	else
		dprintf(STDERR_FILENO, "%s\n", msg);
	exit(exit_code);
}

/**
* copy_content - Copy content from source to destination file.
* @src_fd: Source file descriptor.
* @dest_fd: Destination file descriptor.
* @src_filename: Name of the source file.
* Return: Void
*/
void copy_content(int src_fd, int dest_fd, const char *src_filename)
{
	ssize_t bytes_read, bytes_written;
	char buffer[MAXSIZE];

	while ((bytes_read = read(src_fd, buffer, MAXSIZE)) != 0)
	{
		if (bytes_read == -1)
		{
			close(src_fd);
			close(dest_fd);
			error_exit("Error: Can't read from file", 98,
					src_filename);
		}

		bytes_written = write(dest_fd, buffer, bytes_read);

		if (bytes_written < 0)
		{
			close(src_fd);
			close(dest_fd);
			error_exit("Error: Can't write to", 99, src_filename);
		}
	}

	if (close(src_fd) == -1 || close(dest_fd) == -1)
		error_exit("Error: Can't close file descriptor", 100, NULL);
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
		error_exit("Usage: cp file_from file_to", 97, NULL);

	fd_from = open(av[1], O_RDONLY);

	if (fd_from == -1)
		error_exit("Error: Can't read from file", 98, av[1]);

	fd_to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (fd_to == -1)
		error_exit("Error: Can't write to", 99, av[2]);

	copy_content(fd_from, fd_to, av[1]);

	return (0);
}
