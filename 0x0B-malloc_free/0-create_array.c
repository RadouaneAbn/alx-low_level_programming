#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A;

	if (size == 0)
		return (NULL);

	A = malloc(sizeof(*A) * size);
	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}
	return (A);
}
