#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return copy string
 * @str: string
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
	dup = malloc(sizeof(char) * l);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] !='\0'; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
