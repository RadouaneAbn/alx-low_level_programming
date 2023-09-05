#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - this function creats a 2D array of integers
 * @width: the width
 * @height: the height
 * Return: pointer to the 2D array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j, **A;

	if (width <= 0 || height <= 0)
		return (NULL);

	A = malloc(sizeof(*A) * height);

	if (A == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		A[i] = malloc(sizeof(*A) * width);
		if (A[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(A[j]);
			free(A);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			A[i][j] = 0;
	}
	return (A);
}
