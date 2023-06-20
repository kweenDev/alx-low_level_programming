#include <stdio.h>
/**
* main - entry point for program
*
* description: print all 0, 1, - 9
*
* Return: Always should be 0 meaning Succcess or else program error
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

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
