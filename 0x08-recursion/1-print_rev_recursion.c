#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse.
* @s: string to be printed.
*
* Description: This function prints a string in reverse.
*
* Return: void.
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
