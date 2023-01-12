#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: ointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *tmp;

	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}
