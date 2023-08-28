#include "main.h"

/**
 * _memset - this function will fill memory with a constatnt byte
 * @s: memory area
 * @b: the constant byte
 * @n: bytes of the memory area
 * Return: return pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
