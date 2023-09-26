#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the list
 * Return: size_t number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
		return (count);
	}
	return (count);
}
