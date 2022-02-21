#include "main.h"
/**
 * _strchr - find the character
 * @s: string
 * @c: character
 * Return: c
 */

char *_strchr(char *s, char c)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
			break;
		}
		if (!s[i])
		{
			return ('\0');
		}
	}
	return ('\0');
}
