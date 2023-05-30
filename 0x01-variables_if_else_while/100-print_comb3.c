#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all double digit combinations
 * Return: 0 On Success
 */
int main(void)
{
	int i;
	int j;

	i = '0';
	while (i <= '9')
	{
		j = '1';
		while (j <= '9')
		{
			if ((i != j) && (i < j))
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
