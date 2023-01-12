#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head node
 * @index: index of the node, starting from 0
 *
 * Return: data of the nth node or if the node does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int node = 0;

	if (head)
	{
		while (current)
		{
			if (node == index)
				return (current);
			current = current->next;
			++node;
		}
	}
	return (NULL);
}
