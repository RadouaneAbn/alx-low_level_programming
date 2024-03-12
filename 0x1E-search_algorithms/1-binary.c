#include "search_algos.h"

/**
 * binary_search - This function starts a binary search in an array
 * @array: The array
 * @size: The size of the array
 * @value: The wanted value
 *
 * Return: The index of the value in the array
 *	or -1 if the is not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right;

	if (!array)
		return (NOT_FOUND);

	left = 0, right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (value < array[mid])
			right = mid - 1;
		else if (value > array[mid])
			left = mid + 1;
		else
			return (mid);
	}

	return (NOT_FOUND);
}

/**
 * print_array - This function an array or a section of it
 * @array: The array
 * @l: The starting index
 * @r: the ending index
 */

void print_array(int *array, size_t l, size_t r)
{
	printf("Searching in array: ");
	while (l < r)
		printf("%d, ", array[l++]);
	printf("%d\n", array[l]);
}
