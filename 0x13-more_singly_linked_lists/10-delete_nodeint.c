#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked
 * list
 * @head: pointer to pointer to head node
 * @index: index where to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *temp2;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);

	return (1);
}
