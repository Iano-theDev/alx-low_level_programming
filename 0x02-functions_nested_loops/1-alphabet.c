#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Description: Prints alph in lowercase using _putchar
 * Return: Nothing, return is void
 */
void print_alphabet(void)
{
	int i = 'a';

	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
