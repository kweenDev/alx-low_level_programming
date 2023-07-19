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
	char *main_func;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_func = (char *) main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x ", (unsigned char)main_func[i]);
		if (i != bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
