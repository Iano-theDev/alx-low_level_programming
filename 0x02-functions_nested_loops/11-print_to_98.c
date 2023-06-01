#include "main.h"
void print_char(int n);
void space_nums(int n);
int get_abs(int n);

/**
 * print_to_98 - Prints numbers from n to 98
 * @n: starting point number.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		print_char(n);
		if (n < 98)
			n++;
		else
			n--;
	}
	print_char(n);
	_putchar('\n');
}

/**
 * print_char - prints individual ascii characters.
 * @n: characters to print
 */
void print_char(int n)
{
	int abs_n = get_abs(n);
	int num1 = abs_n / 100;
	int num2 = (abs_n % 100) / 10;
	int num3 = abs_n % 10;

	if (n < 0)
		_putchar('-');

	if (num1 != 0)
		_putchar(num1 + '0');
	if (num1 != 0 || num2 != 0)
		_putchar(num2 + '0');
	_putchar(num3 + '0');
	space_nums(n);
}

/**
 * get_abs - Get absolute value
 * @n: integer to get absolute value of
 * Return: n
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
 * @n: number to space
 */
void space_nums(int n)
{
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}
