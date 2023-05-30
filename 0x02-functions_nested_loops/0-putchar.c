#include "main.h"

/**
 * main - prints a string of characters
 * Return: 0 on Success
 */
int main(void)
{
	int i = 0;
	char string[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0' };

	for (; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
