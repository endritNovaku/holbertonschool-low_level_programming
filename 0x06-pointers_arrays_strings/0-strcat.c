#include "main.h"
/*
 *_strcat - concatenate two strings
 * @dest: string
 * @src: string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		_putchar(dest[i]);
		i++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		_putchar(src[i]);
		i++;
	}
	return (dest);
}
