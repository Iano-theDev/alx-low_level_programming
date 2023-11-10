#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - finds a node of a dlistint_t list
 * @head: pointer to the start of the list
 * @index: index of the node to retrieve
 * Return: index of the node, NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
