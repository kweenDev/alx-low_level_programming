#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned integer.
* @b: The string containing the binary digit.
*
* Return: If character is invalid, returns 0 (error).
*	Otherwise, returns the converted binary string to its
*	decimal equivalent.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result * 2 + (b[i] - '0');
	}

	return (result);
}
