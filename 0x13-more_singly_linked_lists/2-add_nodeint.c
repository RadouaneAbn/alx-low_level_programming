#include "lists.h"

/**
 * add_nodeint - this function adds a new node at the beginning
 *	of a listint_t list
 * @head: pointer to pointer to head of linked list
 * @n: a number
 *
 * Return: the address of the new elements
 *	NULL in case of failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
