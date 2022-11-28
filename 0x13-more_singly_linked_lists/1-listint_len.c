#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to head node
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
