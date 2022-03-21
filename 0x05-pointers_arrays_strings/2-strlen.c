#include <stdio.h>
/**
 * _strlen - gets string length
 * @s: string character
 */

void _strlen(char *s)
{

	while (*s != '\0')
	{
		s++;
	}
	return (s);
}
