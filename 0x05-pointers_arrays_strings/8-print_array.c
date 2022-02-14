#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: int
 * @n: int
 */

void print_array(int *a, int n)
{
	int i = 0;
	while (i < n)
	{
		printf("%i", a[i]);
		i++;
	}
}
