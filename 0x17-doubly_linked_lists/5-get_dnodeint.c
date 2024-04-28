#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t list
 * @head: pointer to the start of a dlistint_t list
 * @index: index/position of the node in the linked list
 *
 * Return: node at position (index)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_count = 0;

	while (head != NULL)
	{
		if (node_count == index)
			return (head);
		node_count++;
		head = head->next;
	}
	return (NULL);
}
