#include "function_pointers.h"

/**
 * array_iterator - performs an action to each element of an array
 * @array: array of intigers
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		int i;

		for (i = 0; i < (int)size; i++)
		{
			action(array[i]);
		}
	}
}
