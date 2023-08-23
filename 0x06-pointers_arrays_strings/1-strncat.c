#include "main.h"

/**
 * _strncat - this function will concatenate two strings
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes
 * Return: return the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0' ; i++, j++)
		dest[j] = dest[i];
	for (i = 0; src[i] != '\0' && i < n; i++, j++)
		dest[j] = src[i];
	return (dest);
}
