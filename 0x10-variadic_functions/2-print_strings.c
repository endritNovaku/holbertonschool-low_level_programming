#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print strings followed by a separator
 * @separator: separator
 * @n number of strings passed to the function
 * @...: arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (i = 1; i <= n; i++)
	{
		if (i != n)
			printf("%s%s", va_arg(ap, char*), separator);
		else
			printf("%s", va_arg(ap, char*));
	}
	va_end(ap);
	printf("\n");
}
