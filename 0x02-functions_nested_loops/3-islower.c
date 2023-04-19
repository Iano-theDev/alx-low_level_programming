#include "main.h"

/**
 * _islower - Entry point
 *
 * description: Checks if a character is lowercase
 *
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	char i = 97, j = 122;

	if (c >= i && c <= j)
		return (1);
	else
		return (0);
}

