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
	unsigned long int tmp;
	unsigned int i = 0;

	for (tmp = n; tmp; tmp >>= 1)
		i++;

/**	if (index > i)
		return (-1);
*/
	n = (n >> index) & 1UL;

	return ((int)n);
}
