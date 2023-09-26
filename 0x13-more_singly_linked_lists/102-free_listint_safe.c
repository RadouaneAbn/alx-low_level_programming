#include "lists.h"

/**
 * free_listint_safe - this function frees a listint_t list
 *	safely, in case if the list has a loop
 * @h: the head of the linked list to be print
 *
 * Return: the number of nodes freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h, *fast = *h, *loop_start, *tmp;
	size_t nodes = 0;

	if (*h == NULL)
		return (0);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			while (*h != fast)
			{
				tmp = (*h)->next;
				free(*h);
				*h = tmp;
				fast = fast->next;
				nodes++;
			}
			loop_start = *h;
			while ((*h)->next != loop_start)
			{
				tmp = (*h)->next;
				free(*h);
				*h = tmp, nodes++;
			}
			free(*h);
			*h = NULL;
			return (nodes + 1);
		}
	}
	while (*h != NULL)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		nodes++;
	}
	*h = NULL;
	return (nodes);
}
