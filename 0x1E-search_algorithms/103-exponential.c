#include "search_algos.h"

int binary_search_helper(int *array, int value,
			 size_t low, size_t high);
size_t min(size_t a, size_t b);

/**
* min - Returns the minimum of two size_t values
* @a: First value
* @b: Second value
*
* Return: `a` if lower or equal to `b`, otherwise `b`
*/
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
* binary_search_helper - Searches for a value in a sorted array
*		of integers using a binary search algorithm
* @array: Pointer to the first element of the array to search in
* @value: Value to search for
* @low: Starting index
* @high: Ending index
*
* Return: Index containing `value`, or -1 if not found
*/
int binary_search_helper(int *array, int value,
			 size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
* exponential_search - Searches for a value in a sorted array
*			of integers using an exponential search
*			algorithm
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: First index containing `value`, or -1 if not found
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = min(bound, size - 1);
	/* 'found' message generated even if array[high] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}
