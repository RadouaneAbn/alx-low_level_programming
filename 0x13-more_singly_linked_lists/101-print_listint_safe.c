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
	const listint_t *slow = head, *fast = head, *loop_start;
	size_t nodes = 0;

	if (head == NULL)
		exit(98);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			while (head != fast)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
				fast = fast->next;
				nodes++;
			}
			loop_start = head;
			while (head->next != loop_start)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
				nodes++;
			}
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);
			return (nodes + 1);
		}
	}

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)slow, head->n);
		head = head->next;
		nodes++;
	}
	return (nodes);
}
