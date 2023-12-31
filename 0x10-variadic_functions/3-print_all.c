#include "variadic_functions.h"

/**
* print_all - Prints anything based on the provided format string.
* @format: The format string containg the types of arguments.
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *current_str;
	const char *separator = "";
	va_list args;

	/* Initialise the argument list */
	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				/* Print char */
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				/* Print integer */
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				/* Print float */
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				/* Get the current string */
				current_str = va_arg(args, char *);
				printf("%s%s", separator, (current_str != NULL) ? current_str : "(nil)");
				break;
			default:
				i++;
				continue; /* Ignore unsupported characters */
		}
		separator = ", ";
		i++;
	}

	va_end(args); /* Clean up the argument list */
	printf("\n"); /* Print a new line at the end */
}
