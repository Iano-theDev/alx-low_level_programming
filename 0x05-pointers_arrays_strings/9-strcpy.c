#include <stdio.h>

/**
 * *_strcpy - copy strg to another string
 * @dest: pointer
 * @src: poiter
 * Return: numbers dest
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[i] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
