#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 * @head: pointer to the first element of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		*head = current->next;
		free(current);
		current = *head;
	}
}
