#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array of nums
 * @size: size of the array
 * @cmp: cmp call
 * Return: the first index that is matcher from the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (NULL);

	if (cmp == NULL)
		return (NULL);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
