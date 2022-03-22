#include <stdio.h>

/**
 * puts2 - prints eveey othe character.
 *
 * @str: string
 *
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	for (str[len] != '\0')
		len++;
	
	len -= 1;

	for (; i <= len; i += 2)
		putchar(str[i]);

	putchar('\n');
}
