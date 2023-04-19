#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints lowercase letters 10 times then a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0, j;

	for (; i <= 10; i++)
	{
		j = 97;

		for (; j < 123; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
