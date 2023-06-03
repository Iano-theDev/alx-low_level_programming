#include "main.h"

/**
 * print_line - prints a line of dashes
 * @n: the number of dashes to print
 */
void print_line(int n)
{
	while (n >= 0)
	{
		_putchar('-');
		n--;
	}
	_putchar('\n');
}
