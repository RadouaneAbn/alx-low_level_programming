#include "main.h"
/**
 * malloc_checked - this function allocates memory using malloc
 * @b: the allocated space
 *
 * Return: pointer to the allocated memory
 *	if malloc fails the function cause normal process termination
 *	with status values of 98
 */

void *malloc_checked(unsigned int b)
{
	void *A = malloc(b);

	if (A == NULL)
		exit(98);
	return (A);
}
