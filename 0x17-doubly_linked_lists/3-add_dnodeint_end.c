#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlidtint_t list
 * @head: pointer to the start of the linked list
 * @n: data value of the new node
 *
 * Return: address of the new node, NULL otherwise
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	new->prev = temp;
	temp->next = new;
	new->n = n;
	new->next = NULL;
	return (new);
}
