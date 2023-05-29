#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabet in lower then uppercase using putchar only"
 * Return: 0 Always
 */
int main(void)
{
	int n;

	n = 97;
	while (n <= 122)
	{
		putchar(n);
		n++;
	}

	n = 65;
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
