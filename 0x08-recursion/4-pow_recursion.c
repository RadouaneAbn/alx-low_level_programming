#include "main.h"

/**
 * _pow_recursion - this function calculate value of x raised to power of y
 * @x: the first number
 * @y: the second number (power)
 * Return: return the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
