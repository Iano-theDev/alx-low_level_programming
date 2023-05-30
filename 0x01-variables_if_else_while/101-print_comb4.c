#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints Every possible combination of 3 digit
 * Return: 0 on Success
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = '0'; num1 <= '7'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '8'; num2++)
		{
			for (num3 = num2 + 1; num3 <= '9'; num3++)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if ((num1 == '7') && (num2 == '8') && (num3 == '9'))
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
