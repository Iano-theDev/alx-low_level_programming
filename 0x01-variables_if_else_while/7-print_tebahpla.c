#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabet in reverse
 * Return: 0 Always
 */
int main(void)
{
	int i;

	i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
