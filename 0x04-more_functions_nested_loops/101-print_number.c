#include "main.h"
/**
 * print_number - print an integer
 * @n: type an integer
 */

void print_number(int n)
{
int rev = 0, remainder;

if (n == 0)
{
	_putchar('0');
}

if (n < 0)
{
	_putchar('-');
	n = -n;
}
while (n != 0)
{
	remainder = n % 10;
	rev = rev * 10 + remainder;
	n /= 10;
	}
while (rev != 0)
{
	_putchar(rev % 10 + '0');
	rev = rev / 10;
}

}
