#include "lists.h"

/**
 * listint_len - gets the number of elements in a listint_t list
 * @h: pointer to the first element of the list
 * Return: size_t number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
		return (count);
	}
	return (count);
}
