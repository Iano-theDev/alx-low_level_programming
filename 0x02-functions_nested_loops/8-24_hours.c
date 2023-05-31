#include "main.h"

/**
 * jack_bauer - Minutes of the day
 * Description: Prints all the minutes of a day.
 * Return: Nothing, void.
 */
void jack_bauer(void)
{
	int i, j, k, m;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (m = 0; m <= 9; m++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}
			if (i == 2 && j == 4)
				break;
		}
	}
}
