#include "main.h"
#include <stdlib.h>

/**
 * create_array - this function creates an array of chars
 * @size: the size of the array
 * @c: the initialized char
 *
 * Return: return pointer to the array, or NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A;

	A = malloc(sizeof(*A) * size);

	if (size == 0 || A == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		A[i] = c;

	return (A);
}
