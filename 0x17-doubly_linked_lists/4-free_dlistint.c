#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer o the start of dlistint_t list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
