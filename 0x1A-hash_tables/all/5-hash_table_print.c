#include "hash_tables.h"

/**
 * hash_table_print - this function prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	int flag = 0;
	unsigned long int i;
	hash_node_t *node;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{

		node = ht->array[i];
		while (node)
		{
			if (flag != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			flag = 1;
		}

	}
	printf("}\n");
}
