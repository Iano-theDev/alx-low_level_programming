#include "main.h"

int _strlen(char *s);
int _putchar(char c);

/**
 * puts_half - prints half of a string
 * @str: string pointer
 * Return: Nothing, void
 */

void puts_half(char *str)
{
	int len, i;

	len = _strlen(str);

	for (i = (len / 2); i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
