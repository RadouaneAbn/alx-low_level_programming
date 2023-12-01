#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

void print_table(hash_table_t* table)
{
	unsigned long int i;

	hash_node_t *cur;
    printf("\nHash Table\n-------------------\n");

    for (i = 0; i < table->size; i++)
    {
        if (table->array[i])
        {
            printf("Index: %ld, Key: %s, Value: %s\n", i, table->array[i] -> key, table->array[i]->value);
	    cur = table->array[i]->next;
	    while (cur)
	    {
            	printf("[collision]   Index: %ld, Key: %s, Value: %s\n", i, cur->key, cur->value);
		cur = cur->next;
	    }
        }
    }

    printf("-------------------\n\n");
}

char* ht_search(hash_table_t* table, char* key)
{
    int index = key_index((unsigned char *)key, table->size);
    hash_node_t* item = table->array[index];

    if (item != NULL)
    {
        if (strcmp(item->key, key) == 0)
            return item->value;
    }

    return NULL;
}

void print_search(hash_table_t* table, char* key)
{
    char* val;

    if ((val = ht_search(table, key)) == NULL)
    {
        printf("Key: %s does not exist\n", key);
        return;
    }
    else {
        printf("%s %s.\n", key, val);
    }
}

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "red", "One");

    hash_table_set(ht, "badr", "annabi");
    hash_table_set(ht, "zidan", "zaoui");
    hash_table_set(ht, "hetairas", "test_1");
    hash_table_set(ht, "mentioner", "test_2");
    print_table(ht);
    print_search(ht, "betty");
    print_search(ht, "zidan");
    print_search(ht, "badr");
    print_search(ht, "red");
    hash_table_set(ht, "red", "two");
    print_search(ht, "red");
    print_search(ht, "depravement");
    print_search(ht, "hetairas");
    print_search(ht, "kejwfnwken");
    return (EXIT_SUCCESS);
}
