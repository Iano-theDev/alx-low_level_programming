#include "variadic_functions.h"
#include <stdargs.h>

/**
 * sum_them_all - gets the sum of all its argumanets
 * @n: first argument
 * Return: int, sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0;
	int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		
	}
}
