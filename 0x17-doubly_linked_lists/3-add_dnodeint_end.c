#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to head node
 * @n: data (integer) of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head)
	{
		current = *head;
		while (current->next)
			current = current->next;
		new->next = NULL;
		new->prev = current;
		current->next = new;
		return (new);
	}
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return(*head);
}
