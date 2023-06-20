#include <stdio.h>

/**
* main - entry point for program
*
* description: print all single digit numbers
*
* Return: Always should be 0 meaning Succcess or else program error
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
/**
* return - exit point
*
* description: termination of the program
*/
