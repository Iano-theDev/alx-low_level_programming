#include "lists.h"

/**
 * dlistint_len - return the number of elements in a dlidtint_t list
 * @h: pointer to the head/start of the list
 *
 * Return: number of elememts/nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
