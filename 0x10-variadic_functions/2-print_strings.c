#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints string aguments
 * @separator: delimeter
 * @n: argument count
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ptr, char*);

		if (str == NULL)
			printf("(nil)");
		printf("%s", str);

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
