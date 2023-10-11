#include "function_pointers.h"

/**
* print_name - Prints a name using a function pointer.
* @name: The name of the person.
* @f: A function pointer to the print function (e.g., print_name_as_is
*	or print_name_uppercase).
*
* Return: void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)

	f(name);
}
