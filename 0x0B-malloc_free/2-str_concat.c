#include "main.h"

char *append_str(char *s3, char *str);
int get_len(char *str);

/**
 *  str_concat - concatienates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: Pointer to concatenated string, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int l1, l2, l3;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = get_len(s1);
	l2 = get_len(s2);
	l3 = l1 + l2;

	s3 = malloc((sizeof(char) * l3) + 1);

	s3 = append_str((append_str(s3, s1)), s2);

	return (s3);
}

/**
 * append_str - appends string to another
 * @s3: pointer to host string
 * @str: pointer to string to append
 * Return: s3
 */

char *append_str(char *s3, char *str)
{
	int i, len;

	len = get_len(s3);

	for (i = 0; str[i] != '\0'; i++)
	{
		int j = len + i;

		s3[j] = str[i];
	}

	return (s3);
}

/**
 * get_len - gets the length of a string
 * @str: pointer to string
 * Return: length od str
 */

int get_len(char *str)
{
	int len = 0;

	if (str == NULL)
		return (len);
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}
