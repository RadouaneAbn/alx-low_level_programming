#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 *
 * @n: the input
 *
 * Return: return the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
