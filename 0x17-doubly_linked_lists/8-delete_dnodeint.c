#include "lists.h"

/**
 * delete_dnodeint_at_index - this functino deletes a node
 *	at given index
 * @head: the head of the list
 * @index: the index of the node to be removed
 *
 * Return: 1 if the function succeed or -1 if it failes
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;


	if (current == NULL)
		return (-1);
	else if (current->next == NULL && index == 0)
		*head = NULL;
	else if (index == 0)
	{
		(current->next)->prev = NULL;
		*head = current->next;
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			if (current == NULL)
				return (-1);
			current = current->next;
		}
		if (current->next == NULL)
			(current->prev)->next = NULL;
		else
		{
			(current->prev)->next = current->next;
			(current->next)->prev = current->prev;
		}
	}

	free(current);
	return (1);
}
