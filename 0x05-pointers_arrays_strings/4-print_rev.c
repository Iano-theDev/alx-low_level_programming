#include "main.h"

int _putchar(char c);

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	while (len > 0)
	{
		s--;
		_putchar(*s);

		len--;
	}

	_putchar('\n');
}
