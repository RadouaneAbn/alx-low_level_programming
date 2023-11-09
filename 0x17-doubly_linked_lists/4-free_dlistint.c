#include "lists.h"

/**
 * free_dlistint - this function frees a doubly linked list
 * @head: the head of the linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
