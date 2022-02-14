#include "main.h"
/**
 * print_rev - reverse a string
 * @s: string
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (len-- >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
