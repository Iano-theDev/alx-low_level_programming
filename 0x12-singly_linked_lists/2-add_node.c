#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_node - adds a node at the start of the linked list
 * @head: pointer to the first element in the list
 * @str: string property of the new node
 * Return: new node on success, NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	char *str_s;
	size_t len;

	if (head && str)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);
		str_s = malloc(sizeof(str));

		if (str_s == NULL)
			return (NULL);

		str_s = strdup(str);
		len = len_s(str_s);

		new->next = *head;
		new->len = len;
		new->str = str_s;

		*head = new;

		return (new);
	}
	return (new);
}
