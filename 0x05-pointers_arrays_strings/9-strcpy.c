#include "main.h"
/**
 * _strcpy - copy a string
 * @dest: copy the string
 * @src: get string
 * Return: String
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	
	for (i = 0; i != src['\0']; i++)
	{
		dest[i] = src[i];
		dest[i] = '\0';
	}
	return (dest);
}
