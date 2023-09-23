#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: first node of the linked list
 * Return: size_t length of a linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
		return (count);
	}
	return (count);
}
