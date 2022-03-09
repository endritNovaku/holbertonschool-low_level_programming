#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array of nums
 * @size: size of the array
 * @cmp: cmp call
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
			break;
		}
	}

	return (-1);
}
