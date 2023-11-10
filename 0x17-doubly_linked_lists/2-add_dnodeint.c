#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a dlistint_t
 * @head: pointer to the start of the list
 * @n: data value of the node to be added
 * Return: Address of the new element, NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
