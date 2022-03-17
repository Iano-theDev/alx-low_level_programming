#include <stdio.h>
/**
 * main - main block
 * Description: program that prints the alphabet in lowercase, then uppercase.
 * Return: 0;
 */
int main(void)
{
	char i;

	for  (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
