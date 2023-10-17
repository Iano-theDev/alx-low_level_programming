#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 * Return: number of bits to flip from a number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, mask;
	unsigned int count, i;

	count = 0;
	mask = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (mask == (diff & mask))
			count++;
		mask <<= 1;
	}
	return (count);
}
