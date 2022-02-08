#include "main.h"
/**
 * _isalpha - check if is alphabet char
 * @c: place a character
 * Return: 0
 */

_isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
