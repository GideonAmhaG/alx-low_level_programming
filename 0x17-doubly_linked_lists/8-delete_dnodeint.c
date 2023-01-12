#include "lists.h"

int delete_first_dnode(dlistint_t **head);

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list
 * @head: pointer to pointer to head node
 * @index: index of the node that should be deleted starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *prv, *tmp, *nxt;
	unsigned int node = 0;

	if (*head && head)
	{
		if (dlistint_len(*head) < index)
			return (-1);
		if (index == 0)
			return (delete_first_dnode(head));
		while (current)
		{
			if (node == index)
			{
				tmp = current;
				if ((dlistint_len(*head) - 1) == index)
					prv->next = tmp->next;
				else
				{
					prv->next = tmp->next;
					nxt->prev = tmp->prev;
				}
				free(current);
				return (1);
			}
			prv = current;
			nxt = current->next;
			current = current->next;
			node++;
		}
	}
	return (-1);
}

/**
 * delete_first_dnode - remove the first node of a doubly linked list
 * @head: pointer to head node
 *
 * Return: 1 if deleted
 */
int delete_first_dnode(dlistint_t **head)
{
	dlistint_t *current = *head, *tmp = NULL;

	tmp = current;
	if (current->next)
	{
		current = current->next;
		current->prev = tmp->prev;
		*head = current;
	}
	else
		*head = NULL;
	free(tmp);
	return (1);
}


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
