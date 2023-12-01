#include "hash_tables.h"

/**
 * hash_table_set - this function adds an element to the hash table
 * @ht: teh hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 if the function succeeded or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *head;

	if (!key || !ht)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current == NULL)
	{
		head = malloc(sizeof(hash_node_t));
		if (!head)
			return (0);
		head->key = strdup(key);
		head->value = strdup(value);
		head->next = NULL;
		ht->array[index] = head;
	}
	else
	{
		if (strcmp(current->key, key) == 0)
			current->value = strdup(value);
		else
		{
			head = malloc(sizeof(hash_node_t));
			if (!head)
				return (0);
			head->key = strdup(key);
			head->value = strdup(value);
			head->next = current;
			ht->array[index] = head;
		}
	}
	return (1);
}
