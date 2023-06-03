#include "main.h"
void print_num(int n);

/**
 * more_numbers - print numbers from 0-14 ten times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			print_num(j);
		}
		_putchar('\n');
	}
}

/**
 * print_num - prints nummbers to stdout
 * @n: number to print
 */
void print_num(int n)
{
	int num1 = n / 10;
	int num2 = n % 10;

	if (num1 != 0)
		_putchar(num1 + '0');
	_putchar(num2 + '0');
}
