#include "search_algos.h"
#include <math.h>

/**
 * jump_search - This function searches for a values in a sorted array
 *	using Jump Search Algorithm
 * @array: The array
 * @size: The size of the array
 * @value: The wanted value
 *
 * Return: The index of the value in the array
 *      or -1 if the is not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, left, right;

	if (!array || size == 0)
		return (NOT_FOUND);

	jump = sqrt(size);
	left = 0, right = jump;

	while (left < size)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		if (value <= array[right] || right >= size)
			break;

		left += jump;
		right += jump;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	right = (right >= size) ? size - 1 : right;
	while (left <= right)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		if (value == array[left])
			break;
		left++;
	}

	if (left < size && value == array[left])
		return (left);
	return (NOT_FOUND);
}
