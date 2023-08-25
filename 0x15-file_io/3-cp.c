#include "main.h"

/**
* _dprintf - Custom printf-like function that writes formatted output
*		to a file destcriptor.
* @fd: The file descriptor to write to.
* @format: The format string.
* @...: Additional arguments.
*
* Description: This function emulates the behaviour of dprintf using
*		write system call.
* Return: The number of characters written.
*/
int _dprintf(int fd, const char *format, ...)
{
	va_list args;
	char buffer[1024];
	int result = vsnprintf(buffer, sizeof(buffer), format, args);

	va_start(args, format);

	write(fd, buffer, result);

	va_end(args);

	return (result);
}

/**
* copyFile - Copies content from source file to destination file.
* @source: The path to the source file.
* @destination: The path to the destination file.
*
* Description: This function reads content from the source file and
*		copies it to the destination file. It handles various
*		errors such as file not found, permission issues, and
*		write failures.
* Return: void.
*/
void copyFile(const char *source, const char *destination)
{
	int file_from, file_to;
	ssize_t bytesRead;
	char buffer[1024];

	/* Open source file for reading */
	file_from = open(source, O_RDONLY);

	if (file_from == -1)
	{
		_dprintf(2, "Error: Can't read from file %s\n", source);
		exit(98);
	}

	file_to = open(destination, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
	S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (file_to == -1)
	{
		_dprintf(2, "Error: Can't write to %s\n", destination);
		close(file_from);
		exit(99);
	}

	while ((bytesRead = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		if (_dprintf(file_to, "%.*s", (int)bytesRead, buffer) < 0)
		{
			_dprintf(2, "Error: Can't write to %s\n", destination);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}

	if (bytesRead == -1)
	{
		_dprintf(2, "Error: Can't read from file %s\n", source);
		close(file_from);
		close(file_to);
		exit(98);
	}

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		_dprintf(2, "Error: Can't close fd %d\n", (file_from == -1) ?
	file_to : file_from);
		exit(100);
	}

	exit(0);
}

/**
* main - Entry point of the program
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
*
* Description: This program copies the content from one file to
*		another. It handles usage errors and file
*		operations erors.
* Return: Always 0 (success).
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	copyFile(argv[1], argv[2]);

	return (0);
}
