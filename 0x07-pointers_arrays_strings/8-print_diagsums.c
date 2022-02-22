#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of diagonal arr
 * @a: array
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		if (i == 0)
		{
			sum1 = sum1 + a[i * size];
		}
		else
		{
			sum1 = sum1 + a[i * (size + 1)];
		}
	}

	for (j = size - 1; j < size * size - 1; j += size - 1)
	{
		if (j == size * size)
		{
			sum2 = sum2 + a[j - 1];
		}
		else
		{
			sum2 = sum2 + a[j];
		}
	}

	printf("%i, %i\n", sum1, sum2);
}
