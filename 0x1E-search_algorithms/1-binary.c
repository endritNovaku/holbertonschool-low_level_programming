#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m;
	size_t i;


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
		if (array[m] < value)
                {
                        l = m + 1;
                }
		if (array[m] < value)
		{
			l = m + 1;

		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else if (array[m] == value)
		{
			return (array[m]);
		}
	}
	return (-1);
}
