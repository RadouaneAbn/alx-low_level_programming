#include "lists.h"

/**
 * add_dnodeint - this function adds a node at the beginning
 *	of doubly linked list
 * @head: pointer to the head of the doubly linked list
 * @n: the number
 *
 * Return: the address of the new node
 *	or NULL in case of a failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
