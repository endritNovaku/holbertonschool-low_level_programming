#include "main.h"
/**
 * _pow_recursion - pow
 * @x: number
 * @y: power
 * Return: x power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
