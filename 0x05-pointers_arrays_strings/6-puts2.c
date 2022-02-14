#include "main.h"
/**
 * puts2 - print every char by a new line
 * @str: string
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		_putchar('\n');
	}
}
