#include "main.h"

/**
* factorial - Returns the factorial of a number.
* @n: The number to be used to return the factorial.
*
* Description: This function will return the factorial
*		of the given number.
*
* Return: The factorial of n. If n is lower than 0, the function
*	should return -1 to indicate an error.
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
