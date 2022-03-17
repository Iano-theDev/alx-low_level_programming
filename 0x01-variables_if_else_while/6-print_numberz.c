#include <stdio.h>
/**
 * main - main block
 * Description: Print single digits of base 10 using putchar.
 * Return: 0 (Success);
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
