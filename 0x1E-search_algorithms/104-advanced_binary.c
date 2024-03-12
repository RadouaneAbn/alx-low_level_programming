#include "search_algos.h"

/**
 * advanced_binary - This function starts an advanced binary search
 * @array: The array
 * @size: The size of the array
 * @value: The wanted value
 *
 * Return: The index of the value in the array
 *	or -1 if the is not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (NOT_FOUND);

	return (recursion_binary_search(array, 0, size - 1, value));
}

/**
 * recursion_binary_search - This fucntion searches for a value
 *	in a sorted array using advanced binary search algorithm
 *
 * @array: The array
 * @left: Pointer to the start of the array or subarray
 * @right: Pointer to the end of the array or subarray
 * @value: The wanted value
 *
 * Return: The index of the value in the array
 *	or -1 if the is not found
 */


int recursion_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	print_array(array, left, right);
	if (array[left] == value)
		return (left);

	if (left == right)
		return (NOT_FOUND);

	mid = (left + right) / 2;
	if (value < array[mid])
		return (recursion_binary_search(array, left, mid - 1, value));
	else if (value > array[mid])
		return (recursion_binary_search(array, mid + 1, right, value));

	/* This is the line responsable for the advanced binary search ↓↓↓*/
	return (recursion_binary_search(array, left, mid, value));
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
