#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - gets the sum of all its argumanets
 * @n: first argument
 * Return: int, sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	if (n)
	{
		va_list ptr;
		unsigned int i;

		va_start(ptr, n);

		for (i = 0; i < n; i++)
		{
			int temp = va_arg(ptr, int);

			sum += temp;
		}
		va_end(ptr);
	}
	return (sum);
}
