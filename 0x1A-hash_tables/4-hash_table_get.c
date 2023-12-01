#include "hash_tables.h"

/**
 * hash_table_get - this function retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value associated vith the key
 *	or NULL if the key doesn't exist
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}
