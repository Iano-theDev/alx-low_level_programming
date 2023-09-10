#include "main.h"
#include <stdio.h>

int get_len(char *str);

/**
 * _strcat - concatnates two strings
 * @src: first string
 * @dest: second string
 * Return: string pointer
 */

char *_strcat(char *dest, char *src)
{
	int len, i = 0;

	len = get_len(dest);

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + len + i) = *(src + i);
	}

	dest[len + i] = '\0';

	return (dest);
}

/**
 * get_len - gets the length of a str
 * @str: string
 * Return: length of str
 */

int get_len(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
