#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the first node of the list
 * Return: value of deleted node, 0 otherwise
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int n = 0;

	if (*head == NULL)
		return (n);
	n = current->n;
	*head = current->next;
	free(current);
	return (n);
}
