#include "main.h"
/**
 * print_sign - check if is higher or lower then 0
 * @n: place number
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
}
