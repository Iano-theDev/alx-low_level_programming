#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabet in lower then uppercase using putchar only"
 * Return: 0 Always
 */
int main(void)
{
	int n;

	n = 65;
	while (n <= 122)
	{
		if (n <= 90 || n >= 97)
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
