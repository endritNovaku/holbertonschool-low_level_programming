#include "main.h"
/**
 * _islower - check if a letter is lower or upper
 * Return: Allways 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
