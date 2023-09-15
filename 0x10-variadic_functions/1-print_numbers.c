#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers passed to it
 * @separator: string pointer, separates the numbers
 * @n: Count of argument variables
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		int j = va_arg(ptr, int);

		printf("%d", j);

		if (i != n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
