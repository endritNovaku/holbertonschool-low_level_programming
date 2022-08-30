#include "search_algos.h"
/**
 * linear_search - search for a num in array linear search
 * @array: array to be searched
 * @size: size of the array
 * @value: value that needs to be finded
 * Return: value if founded or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!value || size <= 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checking array[%li]\n", i);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
