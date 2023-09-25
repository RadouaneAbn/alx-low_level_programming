#include "lists.h"

/**
 * sum_listint - this function sums all the data (n) of a listint_t list
 * @head: the head of the linked list
 *
 * Return: return the result
 *	or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
