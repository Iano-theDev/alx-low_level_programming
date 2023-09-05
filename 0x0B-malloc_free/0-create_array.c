#include "main.h"


/**
 * create_array - creates an array of chars and initializes them
 * @size: size of array
 * @c: char to initialize array of chars with
 * Return: pointer to the array, or NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
