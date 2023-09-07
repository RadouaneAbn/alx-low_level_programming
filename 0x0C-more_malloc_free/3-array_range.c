#include "main.h"

char *_memset(char *s, char b, unsigned int n);
int *array_range(int min, int max);

/**
 * array_range - this function creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to new array
 *	NULL in case of a failure
 */

int *array_range(int min, int max)
{
	int *A, i, j = 0;

	if (min > max)
		return (NULL);

	A = _calloc(max - min + 1, sizeof(int));

	if (A == NULL)
		return (NULL);

	for (i = min; i <= max; i++, j++)
		A[j] = i;

	return (A);
}

/**
 * _memset - this function will fill memory with a constatnt byte
 * @s: memory area
 * @b: the constant byte
 * @n: bytes of the memory area
 * Return: return pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - this function allocates memory for an array
 * @nmemb: number of the elements
 * @size: the size of each elements
 * Return: pointer to the allocated memory or NULL if failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *A;

	if (nmemb == 0 || size == 0)
		return (NULL);

	A = (void *)malloc(nmemb * size);

	if (A == NULL)
		return (NULL);

	_memset(A, 0, nmemb * size);

	return (A);
}
