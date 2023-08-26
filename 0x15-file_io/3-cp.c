#include "main.h"

/**
* copy_file - Copies content from source file to destination file.
* @source: The path to the source file.
* @destination: The path to the destination file.
*
* Description: This function reads content from the source file and
* copies it to the destination file. It handles various errors such as
* file not found, permission issues, and write failures.
* Return: 1 on success, 0 on failure.
*/
int copy_file(const char *source, const char *destination)
{
	int file_from = open(source, O_RDONLY);
	int file_to = open_and_create(destination);
	ssize_t bytesRead, bytesWritten;
	char buffer[1024];

	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
	source);
		return (0);
	}

	if (file_to < 0)
	{
		close(file_from);
		return (0);
	}

	while ((bytesRead = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		bytesWritten = write(file_to, buffer, bytesRead);

		if (bytesWritten != bytesRead)
		handle_error_writing(file_from, destination);
			return (0);
	}

	if (bytesRead < 0)
	{
		handle_error_reading(source), close(file_from), close(file_to);
		return (0);
	}

	if (close(file_from) < 0 || close(file_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		return (0);
	}

	return (1);
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
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n      ");
		return (EXIT_FAILURE);
	}

	if (!copy_file(argv[1], argv[2]))
	{
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
