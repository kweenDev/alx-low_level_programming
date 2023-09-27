#include "main.h"

/**
* _pow_recursion - Returns the value of x raised to the power of y.
* @x: The value to be raised.
* @y: The power.
*
* Description: This function will return the value of x raised to
*		the power of y.
*
* Return: The value of y, if y is lower than 0, the function should
*	return -1.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
