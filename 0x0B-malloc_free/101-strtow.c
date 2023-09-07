#include <stdlib.h>
#include "main.h"

/**
 * word_count - this function find the number of words in a string
 * @s: the string
 * Return: number of words
 */

int word_count(char *s)
{
	int flag, c, w;

	flag = w = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * _strlen - this function compute the lenght of a string
 * @s: pointer to the string
 * Return: return the lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * **strtow - this function splits a string into words
 * @str: the string
 * Return: pointer to an array of words if success or NULL if failure
 */

char **strtow(char *str)
{
	char **A, *tmp;
	int i, k = 0, len, words, c = 0, start, end;

	len = _strlen(str);
	words = word_count(str);
	if (words == 0)
		return (NULL);

	A = (char **) malloc(sizeof(char *) * (words + 1));
	if (A == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				A[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	A[k] = NULL;

	return (A);
}
