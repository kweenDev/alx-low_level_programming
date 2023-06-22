#include "main.h"

/**
* main - entry point
*
* description: prints the first 50 Fibonacci numbers
*	starting with 1 and 2 followed by a new line
*
* Return: Always 0 (success)
*/

int main(void)
{
	int count;
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	unsigned long sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

	fib1 = fib2;
	fib2 = sum;

	if (count == 49)
		printf("\n");
	else
		printf(".");
	}

	return (0);
}

/**
* return - exit point
*
* description: termination of the program
*/
