#include "function_pointers.h"

/**
 * array_iterator - print an array based using one of two functions
 * @array: an array of integers
 * @size: the size of the array
 * @action: wich function will be used to print the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;


	if (size == 0 || array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
