#include "lists.h"

/**
 * sum_dlistint - sums all of the data of nodes in a list
 * @head: pointer to the start of the dlistint_t list
 * Return: sum of all data of nodes, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
