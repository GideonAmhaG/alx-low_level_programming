#include "lists.h"

/**
 * add_node - adds a node at the beginning of a linked list
 * @head: pointer to head node
 * @str: string data of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int len;
	char *s;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (len = 0; str[len]; )
		len++;

	temp->str = s;
	temp->len = len;
	temp->next = *head;

	*head = temp;

	return (temp);
}
