#include "main.h"

#include <stdio.h>

int _putchar(char c);

/**
 * reverse_array - reverses the contents of an array of ints
 * @a: pointer to array of ints
 * @n: size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, b = n - 1, temp = 0;

	while (i < b)
	{
		temp = a[i];
		a[i]  = a[b];
		a[b] = temp;
		i++;
		b--;
	}
}
