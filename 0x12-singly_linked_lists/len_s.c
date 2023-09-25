#include "lists.h"
#include <stddef.h>

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
