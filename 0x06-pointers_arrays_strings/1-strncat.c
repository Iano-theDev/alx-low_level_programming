#include "main.h"

int get_len(char *str);

/**
 * _strncat - concatnates two string
 * @dest: string pointer
 * @src: string pointer
 * @n: size of src string
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, len_s, i;

	len = get_len(dest);
	len_s = get_len(src);

	if (n > len_s)
		n = len_s;

	for (i = 0; i < n; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}


/**
 * get_len - gets the length of a string
 * @str: string ptr
 * Return: int, lenght of str
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
