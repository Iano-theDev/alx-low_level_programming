#include <stdio.h>
/**
 * _strlen - gets string length
 * @s: string character
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
