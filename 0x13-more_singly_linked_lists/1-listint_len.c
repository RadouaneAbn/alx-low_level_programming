#include "lists.h"

/**
 * listint_len - this is a function that returns the number
 *	of elements in a linked listint_t list.
 * @h: pointer to the head of the linked list
 *
 * Return: return the number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}
