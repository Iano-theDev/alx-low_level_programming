#include "lists.h"

/**
 * free_dlistint - frees  a dlistint_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
