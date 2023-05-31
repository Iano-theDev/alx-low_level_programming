#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 * Description: prints lowercase alphabet 10 times
 * Return: Nothing, return is void
 */
void print_alphabet_x10(void)
{
	int i, j;

	i = 0;
	for (; i <= 10; i++)
	{
		j = 'a';
		for (; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
