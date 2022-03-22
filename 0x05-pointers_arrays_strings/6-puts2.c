#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str: string
 */
void puts2(char *)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		putchar(str[j]);
		j = j + 2;
	}

	putchar('\n');
}
