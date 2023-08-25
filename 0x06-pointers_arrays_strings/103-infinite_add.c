#include "main.h"

/**
 * infinite_add - this function will add two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer used to store the result og the addition
 * @size_r: the buffer size
 * Return: the result of the addition
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, c, T, TL;

	while (n1[i])
		i++;
	while (n2[j])
		j++;
	if (i > size_r || j > size_r)
		return (0);
	TL = 0;
	for (i -= 1, j -= 1, c = 0; c < size_r - 1; i--, j--, c++)
	{
		T = TL;
		if (i >= 0)
			T += n1[i] - '0';
		if (j >= 0)
			T += n2[j] - '0';
		if (i < 0 && j < 0 && T == 0)
		{
			break;
		}
		TL = T / 10;
		r[c] = T % 10 + '0';
	}
	r[c] = '\0';
	if (i >= 0 || j >= 0 || TL)
		return (0);
	for (c -= 1, k = 0; k < c; c--, k++)
	{
		TL = r[c];
		r[c] = r[k];
		r[k] = TL;
	}
	return (r);
}
