#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to head node
 * @idx: index of the new node (position to be added at)
 * @n: int data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *temp2;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	temp2 = *head;

	for (i = 0; i < (idx - 1); i++)
	{
		if (temp2 == NULL || temp2->next == NULL)
			return (NULL);

		temp2 = temp2->next;
	}

	temp->next = temp2->next;
	temp2->next = temp;

	return (temp);
}
