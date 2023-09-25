#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the nth
 *	node of a listint_t linked list
 * @head: head of the linked list
 * @index: the index of the node
 *
 * Return: pointer to the node of index "index"
 *	or NULL if teh node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	while (index != 0)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	index--;
	}

	return (current);
}
