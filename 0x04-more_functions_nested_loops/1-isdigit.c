#include "main.h"

/**
 * _isdigit - this function will check if the input is digit
 *
 * @c: the input
 *
 * Return: return (1) if digit | (0) if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
