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
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}

/**
* return - exit point
*
* description: termination of the program
*/
