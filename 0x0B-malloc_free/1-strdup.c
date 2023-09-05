#include "main.h"
#include <stdlib.h>

/**
 * _strlen - a function that gets the length of a string
 * @s: the string
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strdup - this function duplicates a string
 * @str: the string
 *
 * Return: NULL if string is empty, if not it returns pointer to new string
 */

char *_strdup(char *str)
{
	char *A;
	int i, sl;

	if (str == NULL)
		return (NULL);

	sl = _strlen(str);
	A = malloc(sl + 1);

	if (A == NULL)
		return (NULL);
	for (i = 0; i < sl; i++)
		A[i] = str[i];
	A[i] = '\0';
	return (A);
}
