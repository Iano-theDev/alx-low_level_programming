#include "main.h"

/**
 * _isupper - Checks weather a character is an uppercase character
 * @c: character to check
 * Return: 1 on success, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
