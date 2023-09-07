#include "main.h"

/**
 * _realloc - this function reallocate a memory block
 * @ptr: pointer to old memory
 * @old_size: size of the allocated space for old memory
 * @new_size: size of the new memory block
 * Return: pointer to the new memory block
 *	NULL in case of a failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *A, *tmp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		A = malloc(new_size);
		if (A == NULL)
			return (NULL);
		free(ptr);
		return (A);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	A = malloc(new_size);
	if (A == NULL)
		return (NULL);

	tmp = ptr;
	for (i = 0; i < old_size; i++)
		A[i] = tmp[i];
	free(ptr);
	return (A);
}
