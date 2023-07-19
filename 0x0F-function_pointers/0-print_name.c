#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints a name using a function pointer
* @name: name of the person
* @f: function pointer to the print function (e.g.,
* print_name_as_is or print_name_uppercase)
*
* Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)

	f(name);
}
