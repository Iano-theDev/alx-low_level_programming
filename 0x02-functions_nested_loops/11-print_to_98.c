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
		if (n < 0)
		{
			int k;
			k = get_abs(n);
			_putchar('-');
			print_char(k);
		}
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
	int num1, num2, num3;
 
	if (n < 9 && n >= 0)
	{
		num1 = 0;
		num2 = 0;
		num3 = n % 10;
	}
			
	num1 = n / 100;
	num2 = (n % 100) / 10;
	num3 = n % 10;

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
	return(n * -1);
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
