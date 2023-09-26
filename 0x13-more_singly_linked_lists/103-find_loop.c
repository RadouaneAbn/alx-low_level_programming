#include "lists.h"

/**
 * find_listint_loop - this function finds a loop in a listint_t
 * @head: the head of the linked list
 *
 * Return: the address of the node where the loop starts
 *	or NULL in there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}

	return (NULL);
}
