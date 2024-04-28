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
	/* check for null pointer */
	if (head == NULL)
		return (-1);
	/* check for an empty list */
	if (*head == NULL)
		return (-1);
	current = *head;
	/* check if next node is null, proceed to check for IOORE */
	while (current->next != NULL)
	{
		if (node_index == index)
		{
			if (current->prev == NULL)
			{
				(current->next)->prev = NULL;
				*head = current->next;
				return (1);
			}
			(current->next)->prev = current->prev;
			(current->prev)->next = current->next;
			return (1);
		}
		node_index++;
		current = current->next;
	}
	/* check if the index matckes the last node of the list */
	if (node_index == index)
	{
		/* Check if theres only one item in the list */
		if (current->prev == NULL && current->next == NULL)
		{
			*head = NULL;
			return (1);
		}
		(current->prev)->next = NULL;
		return (1);
	}
	return (-1);
}
