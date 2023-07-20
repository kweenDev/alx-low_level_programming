#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the opcodes of its own main function.
* @argc: The number of command line arguments
*	(including the program name).
* @argv: An array containing the command line arguments.
*
* Return: Always 0 (success).
*/
int main(int argc, char *argv[])
{
	int i, bytes;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
