#include "lists.h"

/**
 * list_len - this function counts the number of the elements
 *	in a linked list_t list
 * @h: pointer to the head of the linked list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}

	return (number_of_nodes);
}
