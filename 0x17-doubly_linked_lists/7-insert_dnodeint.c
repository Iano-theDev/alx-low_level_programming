#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the start of the linked list
 * @idx: index/postion to insert the new node
 * @n: data value of the new node
 *
 * Return: address of the new node, NULL if it failed or otherwise
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int node_count = 1;
	dlistint_t *new, *current;

	/* check if the list is empty or index is at the start*/
	if (h == NULL || idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	current = *h;
	/* logic to insert node if index is neither start nor end */
	while (current != NULL)
	{
		if (node_count == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			((current)->next)->prev = new;
			new->prev = current;
			new->next = (current)->next;
			(current)->next = new;
			return (new);
		}
		node_count++;
		current = (current)->next;
	}
	if (node_count < idx)
		return (NULL);
	/* check if the index is at the end of the list */
	new = add_dnodeint_end(h, n);
	return (new);
}
