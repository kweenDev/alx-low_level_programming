#include "main.h"

/**
* actual_prime - Calculates recursively, if a number is a prime.
* @n: The number to be evaluated.
* @i: The iterator.
*
* Description: This function will use recursion to check if a
*		number is a prime.
*
* Return: Will return 1 if n is a prime number, and 0 if not.
*/
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (actual_prime(n, i - 1));
}

/**
* is_prime_number - Will check if an integer is a prime number or not.
* @n: The number to be evaluated.
*
* Return: Will return 1 if n is a prime number, and 0 if not.
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (actual_prime(n, n - 1));
}
