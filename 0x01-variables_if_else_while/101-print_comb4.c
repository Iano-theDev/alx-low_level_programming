#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints Every possible combination of 3 digit
 * Return: 0 on Success
 */
int main(void)
{
	int num1, num2, num3;

	num1 = '0';
	while (num1 < '9')
	{
		num2 = 1;
		while (num2 < '9')
		{
			if ((num1 != num2) && (num2 > num1))
			{
				num3 = 2;
				while (num3 <= '9')
				{
					if ((num2 != num3) && (num2 < num3))
					{
						putchar(num1);
						putchar(num2);
						putchar(num3);
						if ((num1 == '7') && (num2 == '8') && (num3 == '9'))
						{
							break;
						}
						putchar(',');
						putchar(' ');
					}
					num3++;
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
