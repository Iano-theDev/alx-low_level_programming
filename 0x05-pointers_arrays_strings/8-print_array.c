#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: pointer to array
 * @n: number of elements to print
 * Return: Nothing, void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			break;

		if (i == n - 1)
		{
			printf("%d\n", *(a + i));
			continue;
		}
		printf("%d, ", *(a + i));
	}
}
