#include "main.h"
/**
 * _isupper - check if a letter is user or lower case
 * @c: type a character
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
