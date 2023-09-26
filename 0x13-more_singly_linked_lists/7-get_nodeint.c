#include "lists.h"

/**
 * get_nodeint_at_index - returns a node at a particular index
 * @head: pointer to the fist node
 * @index: postion/index of a node in the list
 * Return: listint_t node at index, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	size_t count = 0;

	if (head == NULL)
		return (node);

	while (head != NULL)
	{
		if (count == index)
		{
			node = head;
			return (node);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
