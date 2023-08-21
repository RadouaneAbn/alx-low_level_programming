#include "main.h"

/**
 * swap_int - this function will swap the value of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: always return void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
