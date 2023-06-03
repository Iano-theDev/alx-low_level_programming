#include "main.h"

/**
 * print_diagonal - prints a diagonal line with a backslash
 * @n: length of diagonal line
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
