#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function on each element of
* an array
* @array: pointer to the array of integers
* @size: size of the array
* @action: pointer to the function to be executed on each element
*
* Return: Nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
