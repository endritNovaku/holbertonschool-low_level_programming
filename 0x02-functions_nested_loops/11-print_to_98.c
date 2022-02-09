#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print nums until 98
 * @n: type a integer
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%i", n);
		n++;
	}

	while (n > 98)
	{
		printf("%i", n);
		n--;
	}
}
