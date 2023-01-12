#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to head node
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int nodes = 0;

	while (current)
	{
		current = current->next;
		nodes++;
	}
	return (nodes);
}
