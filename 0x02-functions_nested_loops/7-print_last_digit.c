#include "main.h"
/**
 * main - print the last digit of a number
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
	else if (n < 0)
	{
		f = (n * (-1)) + '0';
		return (f);
	}
}
