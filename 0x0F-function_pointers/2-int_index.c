#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 *
 * @size: Number of elements in the array
 * @cmp: Pointer ro function used to compare values.
 * @array: integer array.
 *
 * Return: if no element matches or size <= 0 return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
