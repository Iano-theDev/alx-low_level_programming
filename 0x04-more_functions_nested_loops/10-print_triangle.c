#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle
 * @size: the length of the triangle
 * Return: nothing.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((size - 1) - j <= i)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
