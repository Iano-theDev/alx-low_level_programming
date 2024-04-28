#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a linked list.
 * @head: pointer to the start of the linked list
 *
 * Return: sum of all data in a linked list, 0 otherwise
 */

int sum_dlistint(dlistint_t *head)
{
	int data_sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		data_sum += head->n;
		head = head->next;
	}
	return (data_sum);
}
