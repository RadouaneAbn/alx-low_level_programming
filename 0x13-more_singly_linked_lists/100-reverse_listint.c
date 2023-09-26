#include "lists.h"

/**
 * reverse_listint - this function reverse a listint_t linked list
 * @head: the head of the linked list to be reversed
 *
 * Return: pointer to the new head
 *	or NULL if the list is empty
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = tmp;
	}
	*head = previous;

	return (*head);
}
