#include "main.h"
/**
 * _puts - write the string with a new line
 * @str: string
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}

	_putchar('\n');
}
