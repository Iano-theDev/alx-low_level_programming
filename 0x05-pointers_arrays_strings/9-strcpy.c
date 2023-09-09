#include "main.h"

/**
 * _strcpy - cpoies a string to the buffer
 * @str: pointer to string to be copied
 * @dest: pointer to string to be returned
 * Return: dest, pointer to copy of str
 */

char *_strcpy(char *dest, char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';

	return (dest);
}
