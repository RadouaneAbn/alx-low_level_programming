#include "lists.h"

/**
 * insert_dnodeint_at_index - this function adds a node
 *	at given position
 * @h: the head of the linked list
 * @idx: the index of the new node
 * @n: the new nodes data (number)
 *
 * Return: the address of the new node
 *	or NULL if idx > lenght of the list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *tmp = *h, *new;
	unsigned int i, dlen = 0;

	while (tmp)
		tmp = tmp->next, dlen++;

	if (idx > dlen)
		return (NULL);

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else if (idx == dlen)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; i < idx; i++)
		current = current->next;
	new->n = n;
	new->prev = current->prev;
	new->next = current;
	(current->prev)->next = new;
	current->prev = new;

	return (new);
}
