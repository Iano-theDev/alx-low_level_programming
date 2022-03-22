#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str: string
 */
void puts2(char *str)
{
	int i, j;
	j = 0;

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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
