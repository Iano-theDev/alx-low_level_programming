#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: prints the lowercase letters of the alphabet
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char i = 'a';
	char j = 'z';

	for (; i <= j; i++)
		_putchar(i);

	_putchar('\n');
}

