#include "variadic_functions.h"

/**
* print_strings - Prints strings followed by a new line.
* @separator: The string to be printed between strings (can be NULL).
* @n: The number of strings passed to the function.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *current_str;

	/* Initialise the argument list */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/* Get the current string */
		current_str = va_arg(args, const char *);

		if (current_str != NULL)
		/* Print the current string */
			printf("%s", current_str);
		else
		/* Print "(nil)" if the string is NULL */
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
	/* Print the separator unless it's the last non-NULL string */
			printf("%s", separator);
	}

	/* Clean up the argument list */
	va_end(args);
	/* Print a new line at the end */
	printf("\n");
}
