#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h->next != NULL)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
