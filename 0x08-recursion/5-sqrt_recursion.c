#include "main.h"

/**
* actual_sqrt_recursion - Recurses to find the natural square root of a number.
* @n: The number be used to calculate the sqaure root of.
* @i: The iterator.
*
* Description: This function will recurse to find the natural square root value
*»······»·······of a number.
*
* Return: The natural square root value.
*/
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to be used to calculate the square root of.
*
*Description: This function will return the natural square root a number.
*
* Return: The resulting square root. If n doesn't have a natural square root,
*	the function should return -1.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (actual_sqrt_recursion(n, 0));
}
