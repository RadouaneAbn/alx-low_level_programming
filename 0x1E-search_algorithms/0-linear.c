#include "search_algos.h"

/**
 * linear_search - This function finds a given values in an array
 *	using linear search algo.
 * @array: The array
 * @size: The size of the array
 * @value: The wanted value
 *
 * Return: The index of the value in the array
 *	or -1 if the is not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (NOT_FOUND);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (NOT_FOUND);
}
