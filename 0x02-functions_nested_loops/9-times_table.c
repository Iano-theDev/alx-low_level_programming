#include "main.h"

/**
 * times_table - 9 times table
 * Description: Prints the 9 times table to stdout
 * Returns: nothing, void.
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				int num1;
				int num2;

				num1 = k / 10;
				num2 = k % 10;

				_putchar(num1 + '0');
				_putchar(num2 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
