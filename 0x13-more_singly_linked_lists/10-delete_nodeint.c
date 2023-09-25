#include "lists.h"

/**
 * delete_nodeint_at_index - this function deletes the node at index
 *	of a listint_t linked list
 * @head: the head of the linked list
 * @index: the index of the node to be deleted
 *
 * Return: return 1 if the function succeeded
 *	-1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *tmp;

	if (index == 0)
	{
		if (current != NULL)
		{
			*head = current->next;
			free(current);
		}
		return (1);
	}

	while (--index)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}

	if (current->next == NULL)
	{
		free(current);
		current = NULL;
		return (1);
	}

	tmp = current->next;

	current->next = (current->next)->next;
	current = tmp;
	free(current);
	return (1);
}
