#include "main.h"

/**
 * print_binary - prints the binary rep of a number.
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char c;
	unsigned long int a = n;
	int count = 0, temp = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		while (a)
		{
			a >>= 1;
			count++;
		}
		while (count > 0)
		{
			count--;
			a = n;
			temp = count;

			while (temp > 0)
			{
				a >>= 1;
				temp--;
			}
			c = (a & 1);
			_putchar(c + '0');
		}
	}
}
