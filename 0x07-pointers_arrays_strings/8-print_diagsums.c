#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - this function prints the sum of two diagonals
 * of a square matrix of integers
 * @a: pointer to an array
 * @size: the square of size of array
 */

void print_diagsums(int *a, int size)
{
	int i, ids = size - 1, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (ids - i));
	}
	printf("%d, %d\n", sum1, sum2);
}
