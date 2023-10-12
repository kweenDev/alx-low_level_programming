#include "variadic_functions.h"

/**
* print_numbers - Prints numbers followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	/* Initialise the argument list */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/* Print the current argument as an integer */
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
			/* Print the separator unless it's the last number */
			printf("%s", separator);
	}

	va_end(args); /* Clean up the argument list */
	printf("\n"); /* Print a new line at the end */
}
