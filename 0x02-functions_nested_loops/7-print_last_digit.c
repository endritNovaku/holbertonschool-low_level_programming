#include "main.h"
/**
 * main - print the last digit of a number
 * @n: integer
 * Return: 0
 */

int print_last_digit(int n)
{
	int f = n % '10';
	_putchar(f);
	return (f);
}
