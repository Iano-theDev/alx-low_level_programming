#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
<<<<<<< HEAD
	unsigned int n;

	n = 0;
=======
	unsigned int dec_val = 0;

>>>>>>> refs/remotes/origin/main
	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
<<<<<<< HEAD
	for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;
		if (b[i] == '1')
			n += 1;
	}
	return (n);
}
=======

	return (dec_val);
}
>>>>>>> refs/remotes/origin/main
