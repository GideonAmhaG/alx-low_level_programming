#include "lists.h"

size_t looped_listint_len2(const listint_t *head);

/**
 * free_listint_safe - frees a listint_t linked list even with loops
 * @h: pointer to pointer to head node
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, i;

	nodes = looped_listint_len2(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;

	}

	h = NULL;

	return (nodes);
}

/**
 * looped_listint_len - counts number of non looped nodes
 * @head: pointer to head node of the list
 *
 * Return: 0 if no loop, number of non looped nodes otherwise
 */
size_t looped_listint_len2(const listint_t *head)
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
