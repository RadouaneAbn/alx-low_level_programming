#include "lists.h"

/**
 * sum_dlistint - this function calculates the sum of all data (n)
 *	in a doubly linked list
 * @head: the head of the doubly linked list
 *
 * Return: the result or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int result = 0;

	while (current)
	{
		result += current->n;
		current = current->next;
	}

	return (result);
}
