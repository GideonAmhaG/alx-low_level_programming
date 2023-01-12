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
	dlistint_t *current = *h, *prv, *new;
	unsigned int node = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*h)
	{
		while (current)
		{
			if (node == idx)
			{
				new->next = current;
				new->prev = prv;
				prv->next = new;
				current->prev = new;
				return (new);
			}
			prv = current;
			current = current->next;
			node++;
		}
	}
	new->next = *h;
	new->prev = NULL;
	*h = new;
	return (*h);
}
