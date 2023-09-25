#include "lists.h"
#include <string.h>
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
 * add_node_end - adds a node at the end of a linked list
 * @head: pointer to the first element of a linked list
 * @str: a string
 * Return: list_t node, NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *current = *head;

	if (head && str)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			return (NULL);

		if (*head == NULL)
			*head = new;
		else
		{
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = new;
		}

		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		new->len = len_s(new->str);
		new->next = NULL;
		return (new);
	}
	return (new);
}
