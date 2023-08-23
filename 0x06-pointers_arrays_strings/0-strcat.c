#include "main.h"

/**
 * _strcat - a function that will concatenates two strings
 * @dest: the destination
 * @src: the source
 * Return: return (dest)
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	i = 0;
	while (dest[i])
	{
		dest[j] = dest[i];
		i++, j++;
	}

	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++, j++;
	}
	dest[j] = '\0';
	return (dest);
}
