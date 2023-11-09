#include "lists.h"

/**
 * dlistint_len - this function get the lenght of a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: return the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t n_nodes = 0;

	while (current)
	{
		n_nodes++;
		current = current->next;
	}

	return (n_nodes);
}
