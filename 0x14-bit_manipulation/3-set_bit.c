#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: 1 if it worked otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int siz = (sizeof(*n) * 8);

	if (index > siz)
		return (-1);

	*n = *n | (*n << index);

	return (1);
}
