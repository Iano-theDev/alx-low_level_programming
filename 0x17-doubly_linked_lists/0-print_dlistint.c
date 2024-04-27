#include "lists.h"
#include <stdio.h>

/**
 * size_t print_dlistint - prints all the elemets of a dlistint_t list
 * @h: pointer to the head of a dlistint_t list
 * 
 * Return: unsigned int, number of nodes
 *
 */

size_t print_dlistint(const dlistint_t  *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (node_count);

	else
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			node_count++;
			h = h->next;
		}
		return (node_count);
	}
}
