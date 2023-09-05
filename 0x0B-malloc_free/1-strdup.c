#include "main.h"

/**
 * _strdup - duplicates a string and allocates space in memory
 * @str: pointer to string to be duplicated
 * Return: pointer to duplicate string, NULL on failure
 */

char *_strdup(char *str)
{
	int i, len;
	char *dup;

	if (!str)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		len += i;
	}

	dup = malloc(sizeof(char) * len);

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
