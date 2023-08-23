#include "main.h"

/**
 * reverse_array - this function will reverse the content of an array
 * @a: the array
 * @n: the number of elements in the array
 * Return: return void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	n = n - 1;
	for (i = 0; i < n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
