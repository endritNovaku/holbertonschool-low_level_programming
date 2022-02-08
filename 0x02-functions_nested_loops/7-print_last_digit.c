#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: integer
 * Return: 0
 */

int print_last_digit(int n)
{
	int f;

	if (n >= 0)
	{
		f = n % 10;
		_putchar('0' + f);
		return (f);
	}
	else
	{
		f = -1 * (n % 10);
		_putchar('0' + f);
		return (f);
	}
}
