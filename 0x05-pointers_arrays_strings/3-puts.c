#include <stdio.h>
/**
 * _puts - print a sting
 * @str: string
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
