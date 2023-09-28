#include "main.h"

/**
 * get_bit - this fucntion returns the value of a bit at a given index
 * @n: the number
 * @index: the index of the wanted bit
 *
 * Return: the value of the bit at index
 *	or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(n) * 8;

	if (index >= bits)
		return (-1);

	n = (n >> index) & 1UL;

	return (n);
}
