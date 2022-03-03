#include "main.h"
#include <stdlib.h>
/**
 * array_range - display range of two nums
 * @min: the min range
 * @max: the max range
 * Return: range
 */

int *array_range(int min, int max)
{
	int *range;
	int i, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	range = malloc(sizeof(int) * length);

	if (range == NULL)
		return (NULL);

	for (i = 0; i < length; i++, min++)
	{
		range[i] = min;
	}

	return (range);
}
