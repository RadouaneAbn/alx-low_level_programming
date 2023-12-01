#include "hash_tables.h"

/**
 * shash_table_create - this function creates a hash table
 * @size: the size of the new hash table
 *
 * Return: pointer to the new hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *table;

	table = (shash_table_t *) malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->shead = NULL;
	table->stail = NULL;
	table->size = size;
	table->array = (shash_node_t **) calloc(
			table->size, sizeof(shash_node_t *));
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}

/**
 * sort_table - this function adds a node to a sorted linked list
 * @ht: the hash table
 * @node: the new node
 */

void sort_table(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current = ht->shead;

	while (current && (current->key[0] <= node->key[0]))
		current = current->snext;


	if (ht->shead == NULL)
	{
		node->snext = NULL;
		node->sprev = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else
	{
		if (current == NULL)
		{
			current = ht->stail;
			node->snext = NULL;
			current->snext = node;
			node->sprev = current;
			ht->stail = node;
		}
		else if (current == ht->shead)
		{
			node->snext = current;
			node->sprev = NULL;
			current->sprev = node;
			ht->shead = node;
		}
		else
		{
			node->snext = current;
			node->sprev = current->sprev;
			current->sprev->snext = node;
			current->sprev = node;
		}
	}
}

/**
 * shash_table_set - this function adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 if the function succeeded or 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *current, *head;

	if (!key || !ht)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current == NULL)
	{
		head = malloc(sizeof(shash_node_t));
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
		{
			free(current->value);
			current->value = strdup(value);
		}
		else
		{
			head = malloc(sizeof(shash_node_t));
			if (!head)
				return (0);
			head->key = strdup(key);
			head->value = strdup(value);
			head->next = current;
			ht->array[index] = head;
		}
	}
	sort_table(ht, head);
	return (1);
}

/**
 * shash_table_get - this function retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value associated vith the key
 *	or NULL if the key doesn't exist
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - this function prints a hash table
 *  using sorted link list
 * @ht: the hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *current = ht->shead;

	if (!ht)
		return;

	printf("{");
	while (current)
	{
		if (flag != 0)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		flag = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - this function prints a hash table in reverse
 *  using sorted link list
 * @ht: the hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *current = ht->stail;

	if (!ht)
		return;

	printf("{");
	while (current)
	{
		if (flag != 0)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		flag = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - this function deletes a hash table
 * @ht: the hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node = ht->shead, *tmp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
