#include "main.h"

/**
 * sqrt_root - calculates square root of number n
 * @n: the number
 * @x: the potential square root
 * Return: the square root
 */

int sqrt_root(int n, int x)
{
	if (x * x >= n)
		return (x);
	else
		return (sqrt_root(n, x + 1));
}

/**
 * is_prime - checks if number n is prime
 * @n: the number
 * @x: the first divisor to check
 * @max: the maximum divisor to check
 * Return: 1 if prime and 0 if not
 */

int is_prime(int n, int x, int max)
{
	if (n % x == 0)
		return (0);
	if (x <= max)
		return (is_prime(n, x + 1, max));
	return (1);
}

/**
 * is_prime_number - a function that checks if a number is prime
 * @n: the number
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	int max;

	if (n <= 1)
		return (0);
	max = sqrt_root(n, 0);
	return (is_prime(n, 2, max));
}
