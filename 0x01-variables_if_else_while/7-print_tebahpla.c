#include <stdio.h>
/**
* main - entry point for program
*
* description: print a-z in reverse
*
* Return: Always should be 0 meaning Succcess or else program error
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}

/**
* return - exit point
*
* description: termination of the program
*/
