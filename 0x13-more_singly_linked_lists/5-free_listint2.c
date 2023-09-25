#include "lists.h"

/**
 * free_listint2 - this function frees a listint_t list
 * @head: the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *current = *head;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}

	*head = NULL;
}
