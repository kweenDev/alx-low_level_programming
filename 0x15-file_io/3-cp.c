#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* error_exit - Print error message and exit with given status code.
* @msg: Error message.
* @exit_code: Status code to exit with.
*/
void error_exit(char *msg, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(exit_code);
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
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (ac != 3)
		error_exit("Usage: cp file_from file_to", 97);

	fd_from = open(av[1], O_RDONLY);

	if (fd_from == -1)
		error_exit("Error: Can't read from file", 98);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
		error_exit("Error: Can't write to file", 99);

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit("Error: Can't write to file", 99);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit("Error: Can't read from file", 98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
		error_exit("Error: Can't close file descriptor", 100);

	return (0);
}
