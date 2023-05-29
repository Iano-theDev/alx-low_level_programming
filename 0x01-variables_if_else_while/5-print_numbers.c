#include <stdio.h>

/**
 * main - Entry point
 * Description: print single digit numbers"
 * Return: 0 Always
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
