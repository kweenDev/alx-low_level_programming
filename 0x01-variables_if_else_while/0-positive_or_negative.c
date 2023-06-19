#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main function - entry point of the program
*
* Description: false or true validation
*
* Return : Always should be 0 meaning Succcess or else program error
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
