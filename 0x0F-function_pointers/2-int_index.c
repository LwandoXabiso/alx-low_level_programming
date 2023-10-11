#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - ...
 * @array: array
 * @size: size of element
 * @cmp: pointer to function
 * Return: ...
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
