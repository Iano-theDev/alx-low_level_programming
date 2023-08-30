#include <stdio.h>

/**
 * _puts - prints a string to std out
 * @str: string pointer, to be printed
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
