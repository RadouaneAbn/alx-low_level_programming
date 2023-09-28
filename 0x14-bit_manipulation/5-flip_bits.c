#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 *	to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int T = n ^ m;
	unsigned int count = 0;

	while (T)
	{
		if (((1UL) & T) == 1)
			count++;
		T >>= 1;
	}

	return (count);
}
