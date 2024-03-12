#include "search_algos.h"

/**
 * interpolation_search - This function searches for a value in a sorted array
 *	using Interpolation Search Algorithm
 * @array: The array
 * @size: The size of the array
 * @value: The wanter value
 *
 * Return: The index of the value in the array
 *      or -1 if the value is not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array)
		return (NOT_FOUND);

	low = 0, high = size - 1;

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (value < array[pos])
			high = pos - 1;
		else if (value > array[pos])
			low = pos + 1;
		else
			return (pos);
	}

	return (NOT_FOUND);
}
