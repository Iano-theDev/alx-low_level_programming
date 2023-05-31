#include "main.h"

/**
 * _islower - Checks if c is lowercase
 * Description: checks the case of character passed to determine
 * if it's lowercase or not.
 * @c: character to check
 * Return: 1 on Success, 0 otherwise.
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
