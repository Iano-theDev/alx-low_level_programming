#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: name
 * @age: age
 * @owner: Owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* #ifndef DOG_H */
