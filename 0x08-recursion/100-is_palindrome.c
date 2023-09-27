#include "main.h"

/**
* check_pal - Recursively checks the characters, for a palindrome.
* @s: The string to be checked.
* @i: The iterator.
* @len: The length of the string.
*
* Return: Will return 1 if it's a palindrome, else 0 if not.
*/
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (check_pal(s, i + 1, len - 1));
}

/**
* _strlen_recursion - Returns the length of a string.
* @s: The string whose length will be calculated.
*
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The string to be reversed.
*
* Return: Will return 1 if it is, else 0 it's not.
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}
