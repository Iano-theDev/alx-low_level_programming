#include "main.h"

/**
 * _isalpha - Checks for alphabet
 * Description: Checks if a character is an alphabet or otherwise
 * @c: character to be checked
 * Return: 1 on success, 0  otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
