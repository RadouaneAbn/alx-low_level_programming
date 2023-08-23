#include "main.h"

/**
 * _strncpy - this is a function that copies a string
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes this functiom will copy
 * Return: return (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
