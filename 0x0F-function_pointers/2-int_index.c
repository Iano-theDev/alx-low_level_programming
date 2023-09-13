#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: function pointer to compare function
 * Return: integer found after search
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int i = 0;

		if (size <= 0)
			return (-1);
		while (size > 0)
		{
			if (cmp(array[i]))
				return (i);
			i++;
			size--;
		}
	}

	return (-1);
}
