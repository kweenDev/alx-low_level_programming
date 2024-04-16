#include "search_algos.h"

/**
* linear_search - Searches for a value in an array of integers
*		using the linear search
*
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: Index of the first occurrence of value in array,
*	or -1 if not found.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t b;

	if (array == NULL)
	{
		return (-1);
	}

	for (b = 0; b < size; b++)
	{
		printf("Value checked array[%li] = [%i]\n", b, array[b]);
		if (array[b] == value)
		{
			return (b);
		}
	}
	return (-1);
}
