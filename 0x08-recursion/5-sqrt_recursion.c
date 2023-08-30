#include "main.h"

/**
 * sqrt_root - this function finds the correct natural square root of a number
 * @n: the number
 * @x: the natural root square
 * Return: return x the natural square root of the number
 * if the number doesn't have a natural square root the function return (-1)
 */

int sqrt_root(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	else
		return (sqrt_root(n, x + 1));
}

/**
 * _sqrt_recursion - this function calculates the natural square
 * @n: the number
 * Return: return the natural square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_root(n, 0));
}
