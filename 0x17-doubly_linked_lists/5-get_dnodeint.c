#include "lists.h"

/**
 * get_dnodeint_at_index - this function returns the nth node
 *	of linked list
 * @head: the head of the linked list
 * @index: the index of the node
 *
 * Return: return the address of the node
 *	or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (NULL);

		current = current->next;
	}

	return (current);
}
