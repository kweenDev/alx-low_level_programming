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
* open_files - Open source and destination files.
* @src_filename: Source file name.
* @dest_filename: Destination file name.
* Return: Array containing file descriptors for source and
* destination files.
*/
int *open_files(char *src_filename, char *dest_filename)
{
	int *fds = malloc(2 * sizeof(int));

	fds[0] = open(src_filename, O_RDONLY);

	if (fds[0] == -1)
		error_exit("Error: Can't read from file", 98);

	fds[1] = open(dest_filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fds[1] == -1)
	{
		close(fds[0]);
		error_exit("Error: Can't write to file", 99);
	}

	return (fds);
}

/**
* close_files - Close source and destination files.
* @fds: Array containing file descriptors for source and
*	destination files.
*/
void close_files(int *fds)
{
	if (close(fds[0]) == -1 || close(fds[1]) == -1)
		error_exit("Error: Can't close file descriptor", 100);
	free(fds);
}

/**
* copy_content - Copy content from source to destination file.
* @src_fd: Source file descriptor.
* @dest_fd: Destination file descriptor.
*/
void copy_content(int src_fd, int dest_fd)
{
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	while ((bytes_read = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit("Error: Can't write to file", 99);
	}

	if (bytes_read == -1)
		error_exit("Error: Can't read from file", 98);
}

/**
* main - Copy the content of one file to another.
* @ac: Argument count.
* @av: Argument vector.
* Return: 0 on success, appropriate error code on failure.
*/
int main(int ac, char **av)
{
	int *fds;

	if (ac != 3)
		error_exit("Usage: cp file_from file_to", 97);

	fds = open_files(av[1], av[2]);
	copy_content(fds[0], fds[1]);
	close_files(fds);

	return (0);
}
