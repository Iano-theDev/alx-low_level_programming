#include "main.h"
#include <stdlib.h>

size_t get_len(const char *str);

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: binary number
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	size_t num = 0;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		num <<= 1;
		if (*b == '1')
			num++;
		b++;
	}
	return (num);
}
