#include "lists.h"

size_t looped_listint_len(const listint_t *head);

/**
 * print_listint_safe - prints a listint_t linked list even with loops
 * @head: pointer to head node
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

/**
 * looped_listint_len - counts number of non looped nodes
 * @head: pointer to head node of the list
 *
 * Return: 0 if no loop, number of non looped nodes otherwise
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t unlooped = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				unlooped++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				unlooped++;
				slow = slow->next;
			}

			return (unlooped);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}
