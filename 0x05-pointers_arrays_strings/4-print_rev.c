#include <stdio.h>

/**
  * print_rev - prints string
  * @s: input string
  * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	while (len > 0)
	{
		s--;
		putchar(*s);
		len--;
	}
	putchar('\n');
}
