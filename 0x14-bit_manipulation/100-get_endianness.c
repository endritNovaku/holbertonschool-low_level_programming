#include "main.h"

/**
 * get_endianness - endianness
 * Return: int
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *) &num;

	if (*c)
		return (1);
	else
		return (0);
}
