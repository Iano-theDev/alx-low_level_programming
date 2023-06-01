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

			printf("%d", k);
			if (j == n)
				break;
			putchar(',');
			if (k < 10)
			{
				putchar(' ');
				putchar(' ');
			}
			if (k > 9 && k < 100)
				putchar(' ');
			putchar(' ');
		}
		putchar('\n');
	}
}
