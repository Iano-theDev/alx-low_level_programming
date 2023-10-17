#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index of bit
 * Return: 1 on success, or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int byte;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	byte = 1 << index;
	*n = *n | byte;
	return (1);
}
