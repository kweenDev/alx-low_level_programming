#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t low, size_t high);

/**
* binary_search_recursion - Helper that recursively searches for
*				a value in an integer array
* @array: Pointer to the first element of the array to search in
* @value: Value to search for
* @low: Starting index in array
* @high: Ending index in array
*
* Return: Index containing `value`, or -1 if not found
*/
int binary_search_recursion(int *array, int value,
			    size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
							mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
							low, mid));
	}

	return (-1);
}

/**
* advanced_binary - Searches for a value in a sorted array of
*		integers using a binary search algorithm.
*		Unlike `binary_search`, it consistently returns
*		first appearance of `value` in the array
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: First index containing `value`, or -1 if not found
*/

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}
