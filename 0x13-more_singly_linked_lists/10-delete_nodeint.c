#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index in listint_t list
 * @head: pointer to start of the list
 * @index: position of node on the list
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current =  *head;
	size_t count = 0;

	if (*head == NULL)
		return (-1);
	while (*head != NULL)
	{
		if (index == 0)
		{
			*head = current->next;
			free(current);
			return (1);
		}
		else if (count == (index  - 1))
		{
			*head = current->next;
			free(current);
			return (1);
		}
		count++;
		*head = (*head)->next;
	}
	return (-1);
}
