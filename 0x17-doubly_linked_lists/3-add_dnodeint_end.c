#include "lists.h"

/**
 * add_dnodeint_end - this function adds a node at the end
 *	of a doubly linked list
 * @head: the head of the linked list
 * @n: the number
 *
 * Return: address of the new node
 *	or NULL in case of failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = new;
		new->prev = tmp;
	}

	return (new);
}
