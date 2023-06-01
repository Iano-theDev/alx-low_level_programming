#include "main.h"
void print_char(int n);
void space_nums(int n);
int get_abs(int n);

/**
 * print_to_98 - Prints numbers to 98.
 * Description: Prints numbers from a point n to 98.
 * @n: starting point number.
 * Return: nothing, void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		print_char(n);
		n++;
	}
	while (n >= 98)
	{
		print_char(n);
		n--;
	}
	_putchar('\n');
}

/**
 * print_char - prints individual ascii characters.
 * Description: breaks n into separate ascii characters and prints.
 * @n: characters to print
 * Return: nothing, void.
 */
void print_char(int n)
{
	int abs_n = get_abs(n);
	int num1, num2, num3;

	if (n < 0)
		_putchar('-');

	if (n < 9)
	{
		num1 = 0;
		num2 = 0;
		num3 = abs_n % 10;
	}

	num1 = abs_n / 100;
	num2 = (abs_n % 100) / 10;
	num3 = abs_n % 10;

	if (num1 + num2 == 0)
	{
		_putchar(num3 + '0');
		space_nums(n);
	}
	else if (num1 == 0)
	{
		_putchar(num2 + '0');
		_putchar(num3 + '0');
		space_nums(n);
	}
	else
	{
		_putchar(num1 + '0');
		_putchar(num2 + '0');
		_putchar(num3 + '0');
		space_nums(n);
	}
}

/**
 * get_abs - Get absolute value
 * Description: Gets absolute value of n integer
 * @n: integer to get absolute value of
 * Return: n, absolute value of integer.
 */
int get_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

/**
 * space_nums - Space numbers
 * Desctiption: put a comma and a space between numbers
 * @n: number to space
 * Return: nothing, void.
 */
void space_nums(int n)
{
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}
