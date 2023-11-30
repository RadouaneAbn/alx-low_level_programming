#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	unsigned int i;

	hash = 1;
	for (i = 0; str[i]; i++)
	{
		hash += hash + (hash * str[i]) / hash;
	}
	return (hash);
}
