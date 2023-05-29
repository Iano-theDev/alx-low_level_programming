#include <stdio.h>

/**
 * main - Entry point
 * Description: Print lowercase alph without q and e
 * Return: 0 Always
 */
int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		if ((i != 101) && (i != 113))
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
