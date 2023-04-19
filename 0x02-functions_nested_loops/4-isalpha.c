#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: character to check
 *
 * description: check if character is an alphabet
 *
 * Return: 1 if c is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

