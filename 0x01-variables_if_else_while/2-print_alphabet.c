#include <stdio.h>

/**
* main - entry point for program
*
* description: print all alphabet letters
*
* Return: Always should be 0 meaning Succcess or else program error
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
/**
* return - exit point
*
* description: termination of the program
*/
