#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints multiplication of n from 0
 * @n: number to get multiplication of.
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		if (n < 0 || n > 15)
			break;
		for (j = 0; j <= n; j++)
		{
			int k = i * j;

			if (j > 0 && k < 10)
			{
				putchar(' ');
				putchar(' ');
			}
			if (k > 9 && k < 100)
				putchar(' ');
			print_nums(k);
			if (j == n)
				break;
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
}

/**
 * print_nums - prints digits passed to it using putchar
 * @n: number to print
 */
void print_nums(int n)
{
	int num1 = n / 100;
	int num2 = (n % 100) / 10;
	int num3 = n % 10;

	if (num1 != 0)
		putchar(num1 + '0');
	if (num2 != 0 || num1 != 0)
		putchar(num2 + '0');
	putchar(num3 + '0');
}
