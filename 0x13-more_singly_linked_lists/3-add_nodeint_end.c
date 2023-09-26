#include "lists.h"

/**
 * add_nodeint_end - adds a node at end of listint_t list
 * @head: pointer to first node of listint_t list
 * @n: integer
 * Return: address of the new node, NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *temp = *head;

	new  = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
			return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
