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
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "Holberton!\0Holberton";
	puts2(str);
	return (0);
}
