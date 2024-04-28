#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index of a dlistint_t list
 * @head: pointer to the start of the linked list
 * @index: position of the node to be deleted
 *
 * Return: 1 on success, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int node_index = 0;

	if (head == NULL) /* null pointer */
		return (-1);
	if (*head == NULL) /* empty list */
		return (-1);
	current = *head;
	while (current->next != NULL)
	{
		if (node_index == index)
		{
			if (current->prev == NULL)/* del list start */
			{
				(current->next)->prev = NULL;
				*head = current->next;
				free(current);
				return (1);
			}
			(current->next)->prev = current->prev;
			(current->prev)->next = current->next;
			free(current);
			return (1);
		}
		node_index++;
		current = current->next;
	}
	if (node_index == index) /* check index match */
	{
		if (current->prev == NULL && current->next == NULL)
		{
			*head = NULL;
			free(current);
			return (1);
		}
		(current->prev)->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
