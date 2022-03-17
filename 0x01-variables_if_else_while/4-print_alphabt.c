#include <stdio.h>
/**
 * main - main block
 * Description: print alphabets in lowecase ommiting 'e' and 'q'.
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
		if (a != 'e' && a != 'q')
		{
		putchar(a);
		}
	putchar('\n');
	return (0);
}
