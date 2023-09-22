#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: head, start of linked list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	int i;

	ptr = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (i);
}
