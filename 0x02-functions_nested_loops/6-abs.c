#include "main.h"

/**
* _abs - function that computes the absolute
*	value of an integer
*
*@n: takes in integer type input for function
*
* description: completes the absolute value of an integer
*
* Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}

/**
* return - exit point
*
* description: termination of the program
*/
