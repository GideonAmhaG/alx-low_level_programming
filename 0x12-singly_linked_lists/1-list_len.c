#include "lists.h"

/**
 * list_len - returns number of nodes in a linked list
 * @h: pointer to head node
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
