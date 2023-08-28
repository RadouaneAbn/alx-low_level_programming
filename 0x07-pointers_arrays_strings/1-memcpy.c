#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: the destination
 * @src: the source
 * @n: number of bytes to be copied
 * Return: returns a pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
