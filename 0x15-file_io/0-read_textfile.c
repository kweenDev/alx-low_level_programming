#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
* read_textfile - Read and print contents of a text file.
* @filename: Name of the file to read.
* @letters: Number of letters to read and print.
* Return: Number of letters read and printed, or 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
