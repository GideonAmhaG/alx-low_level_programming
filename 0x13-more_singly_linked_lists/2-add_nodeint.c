#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: pointer to pointer to head node
 * @n: integer data of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
