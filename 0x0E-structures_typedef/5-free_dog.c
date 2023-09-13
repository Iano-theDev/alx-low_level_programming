#include <stdio.h>

/**
 * free_dog - frees dog
 * @d: struct dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
