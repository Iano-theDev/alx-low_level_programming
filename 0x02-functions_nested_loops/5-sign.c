#include "main.h"

/**
 * print_sign - Gets the sign of a number
 * Description: check the sign of a number and
 * prints the result
 *
 * @n: number to be checked
 * Return: 1 if positive, 0 if zero or -1 if negative.
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
