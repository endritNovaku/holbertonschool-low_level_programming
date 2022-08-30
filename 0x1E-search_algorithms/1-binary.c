#include "search_algos.h"
/**
 * binary_search - search in binary search an array
 * @array: array to be searched
 * @size: size of the array
 * @vaue: value to be found
 * Return: found value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m;
	size_t i;

	if (array == NULL)
		return (-1);


	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i < r + 1; i++)
		{
			printf("%i", array[i]);
			if (i != r)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
		if (array[m] == value)
		{
			return (array[m]);
		}
		else if (array[m] < value)
		{
			l = m + 1;

		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
	}
	return (-1);
}
