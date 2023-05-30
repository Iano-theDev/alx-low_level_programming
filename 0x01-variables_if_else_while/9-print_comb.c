#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints every possible single digit combination
 * Return: 0 On success
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
