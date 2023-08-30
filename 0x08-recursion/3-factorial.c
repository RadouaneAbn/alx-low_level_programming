#include "main.h"

/**
 * factorial - this function calculate the factorial of given number
 * @n: the number
 * Return: return factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
