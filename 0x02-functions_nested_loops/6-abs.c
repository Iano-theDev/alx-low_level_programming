#include "main.h"

/**
 * _abs - Gets absolute value
 * Description: Computes the absolute value of an integer
 * @i: integer to check
 * Return: absolute integer
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}
