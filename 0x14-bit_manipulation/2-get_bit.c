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
	unsigned long int tmp = n;
	int i = 0;

	if (n == 0)
	{
		if (index != 0)
			return (-1);
		return (0);
	}

	while (tmp >= 1)
	{
		tmp >>= 1;
		i++;
	}
	tmp = n;

	i -= index - 1;
	n >>= index;
	tmp >>= index + 1;
	tmp <<= 1;
	n -= tmp;

	return (n);
}
