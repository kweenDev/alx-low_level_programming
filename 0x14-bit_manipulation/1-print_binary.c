#include "main.h"

/**
* print_binary - Recursively prints the binary
* representation of an unsigned long integer.
* @n: Unsigned long int
*
* Description: The function is designed to print the
* binary representation in reverse order, effectively
* giving the correct binary representation when the
* recursion unwinds.
* Return: Void
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		if (n >> 1)
			print_binary(n >> 1);

		_putchar((n & 1) + '0');
	}
}
