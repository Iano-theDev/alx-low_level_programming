#include "lists.h"

/**
 * list_len - finds the number of nodes in a list
 * @h: head
 * Return: number of nodes of a linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
