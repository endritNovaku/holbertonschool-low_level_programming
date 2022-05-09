#include "main.h"
/**
 * _strlen - find the length of a str
 * @s: place the string
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
