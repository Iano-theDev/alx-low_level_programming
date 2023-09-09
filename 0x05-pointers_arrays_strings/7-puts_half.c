#include "main.h"
#include <stdio.h>


int _strlen(char *s);
int _putchar(char c);

/**
 * puts_half - prints half of a string
 * @str: string pointer
 * Return: Nothing, void
 */

void puts_half(char *str)
{
	int len, i, n;

	len = _strlen(str);

	if ((len % 2) != 0)
		n = (len / 2) + 1;

	else if ((len % 2) == 0)
		n = len / 2;

	for (i = n; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

/**
 * _strlen - gets the length of a string
 * @s: string pointer
 * Return: int, length of s
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
