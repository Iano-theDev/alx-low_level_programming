#include "lists.h"

/**
 * free_dlistint_t - frees  a dlistint_t list
 * @head: pointer to the start of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
