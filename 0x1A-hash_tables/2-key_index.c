#include "hash_tables.h"

/**
 * key_index - this function gives the idex of a key
 * @key: the key
 * @size: the size of the array
 *
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
