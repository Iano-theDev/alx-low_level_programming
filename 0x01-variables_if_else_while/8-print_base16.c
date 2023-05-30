#include <stdio.h>

/**
 * main - Entry Block
 * Description: Prints the hex numbers in lowercase
 * Return: 0 always
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

	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
