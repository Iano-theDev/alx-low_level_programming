#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 * @head: pointer to the first element of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *temp = NULL;

	if (*head == NULL)
		return;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
