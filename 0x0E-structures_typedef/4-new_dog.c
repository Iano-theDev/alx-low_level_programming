#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: type dog_t, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	if (!name || !age !owner)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner

	return (dog);
}
