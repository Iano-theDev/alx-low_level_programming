#include <stdio.h>
/**
 * main - main block.
 * Description: print alphabet in lowecase then uppercase.
 * Return: 0 (success)
 */
int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');

	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
