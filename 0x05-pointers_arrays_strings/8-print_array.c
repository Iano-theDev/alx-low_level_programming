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
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i == n - 1)
			break;
		printf(", ");

		i++;
	}
	printf("\n");
}
