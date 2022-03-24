#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - convert binary to decimal
 * @b: binary
 * Return: sum
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int weight = 1;
	int i;
	int length = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		length++;
	}

	for (i = (length - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			sum = sum + weight;

		weight = weight * 2;
	}

	return (sum);
}
