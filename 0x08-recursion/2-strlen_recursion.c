#include "main.h"

/**
* _strlen_recursion - Returns the length of a string.
* @s: The string that will have its length calculated.
*
* Description: This function will return a the length of
*		a string.
*
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
