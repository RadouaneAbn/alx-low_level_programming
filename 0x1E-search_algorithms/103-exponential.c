#include "search_algos.h"

/**
 * exponential_search - This function searches for a value in a sorted array
 *	using Exponential search algorithm
 * @array: The array
 * @size: The size of the array
 * @value: The wanted value
 *
 * Return: The index of the value in the array
 *      or -1 if the value is not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left, right, mid;

	if (!array)
		return (NOT_FOUND);

	if (value == array[0])
		return (0);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	left = i / 2;
	right = (i < size) ? i : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
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
