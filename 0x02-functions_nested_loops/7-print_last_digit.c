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

	i = n % 10;
	_putchar(i);
	return (i);
}
