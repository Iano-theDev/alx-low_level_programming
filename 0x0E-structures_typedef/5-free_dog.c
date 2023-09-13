#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees dog
 * @d: struct dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->age)
			free(d->age);
		if (d->owner)
			free(d->ownere);
		free(d);
	}
}
