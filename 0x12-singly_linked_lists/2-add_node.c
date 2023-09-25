#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

size_t len_s(char *str);

/**
 * len_s - gets the length of a string
 * @str: a string
 * Return: the length of str
 */
size_t len_s(char *str)
{
	size_t len = 0;

	if (str)
	{
		while (*str != '\0')
		{
			len++;
			str++;
		}
		return (len);
	}
	return (len);
}

/**
 * add_node - adds a node at the start of the linked list
 * @head: pointer to the first element in the list
 * @str: string property of the new node
 * Return: new node on success, NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	if (head && str)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		new->len = len_s(new->str);

		new->next = *head;

		*head = new;
		return (new);
	}
	return (new);
}
