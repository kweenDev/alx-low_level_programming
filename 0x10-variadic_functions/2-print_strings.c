#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - Prints strings followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *current_str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current_str = va_arg(args, const char *);

		if (current_str != NULL)
			printf("%s", current_str);
		else
			printf("nil");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
