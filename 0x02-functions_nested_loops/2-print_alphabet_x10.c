#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 */
void print_alphabet_x10(void)
{
	int i;
	int a;

	for (i = 0; i < 10; i++)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
