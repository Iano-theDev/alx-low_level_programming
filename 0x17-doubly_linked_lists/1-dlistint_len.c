#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the length of a dlistint_t
 * @h: pointer to the head of the list
 * Return: length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h->next != NULL)
		{
			count++;
			h = h->next;
		}
		count++;
	}
	return (count);
}
