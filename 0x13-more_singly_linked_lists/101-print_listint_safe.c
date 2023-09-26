#include "lists.h"

/**
 * print_listint_safe - this function prints a listint_t list
 *	safely, in case if the list has a loop
 * @head: the head of the linked list to be print
 *
 * Return: the number of nodes printed
 *	exit with status 98 in case of a failure
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	if (head == NULL)
		exit(98);

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next < head)
		{
			head = head->next;
			nodes++;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (nodes);
}
