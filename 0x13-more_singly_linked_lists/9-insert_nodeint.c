#include "lists.h"

/**
 * insert_nodeint_at_index - insersts a node at agiven index of a list
 * @head: pointer to the first node
 * @idx: index to insert
 * @n: integer
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new  = NULL;
	listint_t *current = *head;
	size_t count = 0;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (idx == 0)
		{
			*head = new;
			new->n = n;
			new->next = current;
			return (new);
		}
		else if (count == (idx - 1))
		{
			new->n = n;
			new->next = current->next;
			current->next = new;
			return (new);
		}
		count++;
		current = current->next;
	}
	return (new);
}
