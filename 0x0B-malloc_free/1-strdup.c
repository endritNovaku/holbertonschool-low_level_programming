#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return copy string
 * @str: string
 * Return: dup
 */

char *_strdup(char *str)
{
	int i, l = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}
	dup = malloc(sizeof(char) * l + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
