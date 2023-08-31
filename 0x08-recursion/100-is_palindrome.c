#include <stdio.h>

int get_len(char *str);
int check_palindrome(int len, char *s);

/**
 * is_palindrome - checks if a string is a plindrome
 * @s: pointer to string to be checked
 * Return: 1 if s is a plaindrome and 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = get_len(s);

	return (check_palindrome(len, s));
}

/**
 * get_len - gets the length of a string
 * @str: string pointer to get length of
 * Return: length of the string
 */

int get_len(char *str)
{
	if (*str == '\0')
		return (0);

	return (1 + get_len(str + 1));
}

/**
 * check_palindrome - check if s is a palindrome
 * @s: pointer to a string
 * @len: length of the sreing
 * Return: 1 if true, 0 otherwise
 */

int check_palindrome(int len, char *s)
{
	if (len < 1)
		return (1);

	if (*s == *(s + len - 1))
		return (check_palindrome((len - 2), (s + 1)));

	return (0);
}
