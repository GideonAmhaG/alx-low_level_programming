#include "lists.h"

/**
 * free_listint(listint_t *head) - frees a listint_t list
 * @head: pointer to head node
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
