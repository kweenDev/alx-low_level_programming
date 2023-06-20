#include <stdio.h>
/**
* main - entry point for program
*
* description: print numbers of base16 in lowercase
*
* Return: Always should be 0 meaning Succcess or else program error
*/

int main(void)
{
	int digit = 48; /*48; decimal rep of 0*/

	while (digit <= 102) /*102; decimal rep of f*/
	{
		putchar(digit);

		/* after 9 we jump till 96; */
		if (digit == 57)
			digit += 39;
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
