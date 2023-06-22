#include "main.h"

/**
* print_to_98 - print n to 98 counts
*		separated by comma, followed
*		by space and number should be
*		printed in order
* @n: input
*
* description: prints all natural numbers from n to 98
*
* Return: returns numbers up to 98, always 0 (success)
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}

/**
* return - exit point
*
* description: termination of the program
*/
