#include "lists.h"

/**
 * free_listint2 - this function frees a listint_t list
 * @head: the head of the list
 */

void free_listint2(listint_t **head)
{
        listint_t *tmp, *current;

	if (head == NULL || *head == NULL)
		return;

	current = *head;
        while (current != NULL)
        {
                tmp = current;
                current = current->next;
		free(tmp);
        }

	current = NULL;
}
