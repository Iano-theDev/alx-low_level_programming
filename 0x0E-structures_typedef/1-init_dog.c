#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a varoable of type dog
 * @d: dog structure
 * @name: name to assign
 * @age: age to assign
 * @owner: owner to assign
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	};
}
