#include <stdio.h>

/**
* main - entry point for program
*
* description: print all alphabet in lowercase then in uppercase
*
* Return: Always should be 0 meaning Succcess or else program error
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
/**
* return - exit point
*
* description: termination of the program
*/
