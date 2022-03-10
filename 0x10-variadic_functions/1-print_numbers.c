#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print num followed by a new line
 * @separator: string to be printerd between numbers
 * @n: number of integers passed to the function
 * @...: arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int num;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (i = 1; i <= n; i++)
	{
		num = va_arg(ap, unsigned int);
		if (i != n)
			printf("%i%s", num, separator);
		else
			printf("%i", num);
	}
	va_end(ap);

	printf("\n");
}
