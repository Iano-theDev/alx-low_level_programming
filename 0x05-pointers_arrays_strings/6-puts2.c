#include "main.h"

int _putchar(char c);
/**
 * puts2 - prints every other character of a string
 * @str: pointer to a string
 * Return: nothing, void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
