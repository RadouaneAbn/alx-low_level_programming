#include "function_pointers.h"

/**
 * int_index - this function searches for the index of the first element
 *	for which the cmp function does not return 0
 * @array: the array
 * @size: size of the array
 * @cmp: the function which will check the element
 * Return: returns the index of the first element that returns 1
 *	and -1 if no element matches or in case of a failure
 *	(size <= 0, array is NULL or cmp is NULL)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
