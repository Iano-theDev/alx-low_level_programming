#include "lists.h"

/**
 * sum_listint - sums all the data vslue of a list
 * @head: pointer to beginning of linked list
 * Return: sum, 0 otherwise
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
