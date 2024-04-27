#include "lists.h"

/**
 * add_dnodeint - adds a node at the begining of a dlistint_t lis
 * @head: pointer to the start of the list
 * @n: data value for the new node to be added to the list
 *
 * Return: address of the new element, otherwise NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	if (new->next != NULL)
	{
		(new->next)->prev = new;
	}
	return (new);
}
