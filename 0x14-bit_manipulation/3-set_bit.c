#include "main.h"

/**
 * set_bit - this function sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index of the bit to be seted to 1
 *
 * Return: 1 if the function works
 *	0 if the function do not work
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(n) * 8;

	if (index >= bits)
		return (-1);

	*n = (1UL << index) | *n;

	return (1);
}
