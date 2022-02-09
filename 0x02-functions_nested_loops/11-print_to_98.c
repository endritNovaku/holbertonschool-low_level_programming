#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print nums until 98
 * @n: type a integer
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
		printf("%i", 98);
		putchar('\n');
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
		printf("%i", 98);
		putchar('\n');
	}
	else
	{
		printf("%i", n);
		putchar('\n');
	}
}
