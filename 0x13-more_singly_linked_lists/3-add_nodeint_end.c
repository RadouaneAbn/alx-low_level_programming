#include "lists.h"

/**
 * add_nodeint_end - this function adds a new node
 *	at the end of a listint_t list
 * @head: the head of the list
 * @n: a number
 *
 * Return: the address of the new node
 *      NULL in case of failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current,  *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = new;

	return (new);
}
