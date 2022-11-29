#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head node
 * @index: index of the node
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
