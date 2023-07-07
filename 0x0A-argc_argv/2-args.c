#include <stdio.h>

/**
* main - entry point
* @argc: argument count
* @argv: array of pointers to argument strings
* description: prints all arguments it receives
* Return: 0 (success), exit point
*/

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
