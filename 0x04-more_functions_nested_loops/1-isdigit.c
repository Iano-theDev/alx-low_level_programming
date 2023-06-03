#include "main.h"

/**
 * _isdigit - checks is character is digit
 * @c: character to check
 * Return: 1 if true, 0 therwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
