#include "main.h"

/**
 * print_line - prints a line of underscores
 * @n: the number of underscores to print
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
