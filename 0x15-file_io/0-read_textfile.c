#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* read_textfile - Read and prints content of a text file.
* @filename: Name of the file to read.
* @letters: Number of letters to read and print.
*
* Return: Number of letters read and printed, or 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;		/* File descriptor for the opened file */
	ssize_t read_chars;	/* Number of characters read */
	char buffer[1024];	/* Buffer for reading content */

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);	/* Open the file in read-only mode */
	if (fd == -1)
		return (0);

	read_chars = read(fd, buffer, letters);	/* Read up to 'letters' characters */
	if (read_chars == -1)
	{
		close(fd);	/* Close the file in case of error */
		return (0);
	}

	/* Write the content to standard output */
	write(STDOUT_FILENO, buffer, read_chars);
	close(fd);	/* Close the file */

	return (read_chars);
}
