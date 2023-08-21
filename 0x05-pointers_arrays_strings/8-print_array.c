#include <stdio.h>
#include "main.h"

/**
 * print_array - this function will print n elements of an array of integers
 * @a: the array
 * @n: the number of element in the array
 * Return: return void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i < n)
			printf(", ");
	}
	printf("\n");
}
