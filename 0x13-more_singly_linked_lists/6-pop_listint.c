#include "lists.h"

/**
 * pop_listint - this function deletes the head node of a listint_t list
 * @head: the head of the linked list
 *
 * Return: return the head node's data 'n'
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int n;

	if (current == NULL)
		return (0);

	n = current->n;
	*head = current->next;

	free(current);

	return (n);
}
