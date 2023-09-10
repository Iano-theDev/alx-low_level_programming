#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0, difference otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i, res = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
		{
			res = s1[i] - s2[i];
			break;
		}
	}

	return (res);
}
