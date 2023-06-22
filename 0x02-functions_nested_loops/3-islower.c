#include "main.h"

/**
* _islower - function to check if
*	character is lowercase
*
* @c: checks input of function
*
* description: checks for lowercase characters
*
* Return: returns 1 if 'c' is lowercase
*	otherwise always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

/**
* return - exit point
*
* description: termination of the program
*/
