#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0, difference otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			continue;
		}
		else
		{
			result = s1 - s2;
			break;
		}
	}
	return (result);
}
