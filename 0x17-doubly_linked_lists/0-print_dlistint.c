#include "lists.h"

/**
 * print_dlistint - this function prints a doubly linked list
 * @h: pointer to the head of the linked list
 *
 * Return: number of nodes printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t n_nodes = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		n_nodes++;
	}

	return (n_nodes);
}
