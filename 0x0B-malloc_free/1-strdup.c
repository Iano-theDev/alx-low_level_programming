#include "main.h"

/**
 * _strdup - duplicates a string and allocates space in memory
 * @str: pointer to string to be duplicated
 * Return: pointer to duplicate string, NULL on failure
 */

char *_strdup(char *str)
{
	int i, j, len;
	char *dup;

	if (!str)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	dup = malloc((sizeof(char) * len) + 1);

	if (dup == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		dup[j] = str[j];
	}

	return (dup);
}
