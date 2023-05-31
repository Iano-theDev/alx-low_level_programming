#include "main.h"

/**
 * print_last_digit - get last digit
 * Description: prints the last digit of a number
 * @n: number to check for last digit
 * Return: n, the value of the last digit
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		i = (n * -1) % 10;
	else
		i = (n) % 10;

	_putchar(i + '0');
	return (i);
}
