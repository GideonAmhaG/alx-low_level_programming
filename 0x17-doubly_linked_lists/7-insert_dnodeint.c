#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head node
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nxt = *h, *current, *new;
	unsigned int node = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (dlistint_len(*h) == idx)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	while (nxt)
	{
		if (node == idx)
		{
			new->next = nxt;
			new->prev = current;
			current->next = new;
			nxt->prev = new;
		}
		current = nxt;
		nxt = nxt->next;
		node++;
	}
	return (new);
}

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
