#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list_t list
 * @head: head of list_t list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;

	if (head == NULL)
		free(head);

	else
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(current->str);
			free(current);
			current = head;
		}
		free(current->str);
		free(current);
	}
}
