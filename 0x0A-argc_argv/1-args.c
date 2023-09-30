#include <stdio.h>

/**
* main - entry point
* @argc: argument count
* @argv: array of pointer to argument strings
* description: prints the number of arguments
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{

/* to suppress unused variable warning */
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
