<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
=======
#include "main.h"

>>>>>>> 53b7dd3c6f556fd0588af02846b8431387898451
/**
 * malloc_checked - allocates memory using malloc
 * @b: size to be allocated
 * Return: pointer to allocated memory or exit with 98
 **/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
