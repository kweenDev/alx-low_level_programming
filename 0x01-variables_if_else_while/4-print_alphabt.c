#include <stdio.h>

/**
* main - entry point for program
*
* description: print all alphabet letters except q and e
*
* Return: Always should be 0 meaning Succcess or else program error
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
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
