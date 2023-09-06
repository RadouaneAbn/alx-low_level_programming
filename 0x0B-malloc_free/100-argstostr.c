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
 * _strcpy - this function will copy a string from 'src' to 'dest'
 * @dest: the destination
 * @src: The source
 * Return: return the string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * argstostr - this function will concatenate all the arguments of my program
 * @ac: the number of arguments
 * @av: array of arguments
 * Return: pointer to new string if success or NULL if fail
 */

char *argstostr(int ac, char **av)
{
	int i, Tl = 0;
	char *A, *A_out;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		Tl += _strlen(av[i]) + 1;
	Tl++;

	A = malloc(Tl);
	if (A == NULL)
		return (NULL);

	A_out = A;
	for (i = 0; i < ac; i++, A++)
	{
		_strcpy(A, av[i]);
		A += _strlen(av[i]);
		*A = '\n';
	}
	*A = '\0';
	return (A_out);
}
