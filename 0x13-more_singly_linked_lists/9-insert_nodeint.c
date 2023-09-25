#include "lists.h"

/**
 * insert_nodeint_at_index - this function inserts a new node at given position
 * @head: teh head of the linked list
 * @idx: the index of the new node
 * @n: the data (n)
 *
 * Return: return address of the new node
 *	or NULL in case of failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *new, *tmp;

	while (--idx != 0)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	new = malloc(sizeof(listint_t));

	tmp = current->next;
	current->next = new;

	current = tmp;

	new->n = n;
	new->next = current->next;

	return (new);
}
