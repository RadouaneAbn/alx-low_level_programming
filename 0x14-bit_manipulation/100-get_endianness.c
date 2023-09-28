#include "main.h"

/**
 * get_endianness - this function checks the endianness of the system
 * Return: 1 if little endian
 *	0 if big endian
 */

int get_endianness(void)
{
	unsigned int x = 0x1234;
	unsigned char *s = (unsigned char *)&x;

	if (s[0] == 0x12)
		return (0);
	else
		return (1);
}
