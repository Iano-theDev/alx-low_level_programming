#include <stdio.h>

/**
 * main - Entry point
 * Description: use putchar to print alphabet
 * Return: 0 Always
 */
int main(void)
{
	int i;

	i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
