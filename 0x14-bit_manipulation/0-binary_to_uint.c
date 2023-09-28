#include "main.h"

/**
 * binary_to_uint - this function converts a binary number to an unsigned int
 * @b: the binary number as a string
 *
 * Return: return a decimal number
 *	or 0
 *	 - if b contains a char tha tis not a '0' or '1'
 *	 - if n is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, x = 1;
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	while (b[i])
		i++;

	while (--i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		n += (b[i] - '0') * x;
		x *= 2;
	}

	return (n);
}
