#include "lists.h"

/**
 * free_listint - this function frees a listint_t list
 * @head: the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp, *current = head;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}

}
