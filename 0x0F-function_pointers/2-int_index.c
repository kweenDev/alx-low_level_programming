#include "function_pointers.h"

/**
* int_index - Searches for an integer in an array.
* @array: A pointer to the array of integers.
* @size: The size of the array.
* @cmp: A pointer to the function used for comparison.
*
* Return: The index of the first element for which the
*	cmp function does not return 0.
*	If no element matches, or if size <= 0, return -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
