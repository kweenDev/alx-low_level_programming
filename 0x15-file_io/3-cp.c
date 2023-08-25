#include "main.h"

/**
* main - Entry point of the program
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
*
* Description: This program copies the content from one file to
* another. It handles usage errors and file operations errors.
* Return: Always 0 (success).
*/
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytesRead, bytesWritten;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (EXIT_FAILURE);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from < 0)
		handle_error_reading(argv[1]);

	file_to = open_and_create(argv[2]);

	if (file_to < 0)
		handle_error_writing(file_from, argv[2]);

	while ((bytesRead = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		bytesWritten = write(file_to, buffer, bytesRead);

		if (bytesWritten != bytesRead)
		{
			handle_error_writing(file_from, argv[2]);
		}
	}

	if (bytesRead < 0)
		handle_error_reading(argv[1]);
	if (close(file_from) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
	if (close(file_to) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);

	return (EXIT_SUCCESS);
}

/**
* handle_error_reading - Handles error when reading a file
* @filename: The name of the file that caused the error.
*/
void handle_error_reading(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
* open_and_create - Opens or creates a file for writing
* @filename: The name of the file to open or create.
* Return: The file descriptor or -1 on error.
*/
int open_and_create(const char *filename)
{
	int fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0664);

	if (fd < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);

	return (fd);
}

/**
* handle_error_writing - Handles error when writing to a file
* @file_from: The file descriptor of the source file.
* @filename: The name of the destination file.
*/
void handle_error_writing(int file_from, const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	close(file_from);
	exit(EXIT_FAILURE);
}
