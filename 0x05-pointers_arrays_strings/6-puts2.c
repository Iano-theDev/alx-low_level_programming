#include <stdio.h>

/**
 * puts2 - prints eveey othe character.
 *
 * @str: string
 *
 */

void puts2(char *str)
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
