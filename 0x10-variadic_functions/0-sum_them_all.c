#include "variadic_functions.h"

/**
* sum_them_all - Returns the sum of all its parameters.
* @n: The number of parameters.
*
* Return: The sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	/* Initialise the argument list */
	va_start(args, n);

	for (i = 0; i < n; i++)
		/* Access each argument and add to sum */
		sum += va_arg(args, int);

	va_end(args); /* Clean up the argument list */

	return (sum);
}
