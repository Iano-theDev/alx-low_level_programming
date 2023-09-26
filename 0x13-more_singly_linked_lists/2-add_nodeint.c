#include "lists.h"

/**
 * add_nodeint - adds a node to start of listint_t list
 * @head: pointer to the first node of the list
 * @n: integer
 * Return: address of listint_t new node, NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (head && n)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->next = *head;
		new->n = n;
		*head = new;
		return (new);
	}
	return (new);
}
