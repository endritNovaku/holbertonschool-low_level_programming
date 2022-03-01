#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: concated strings
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k = 0;
	char *cc;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		k++;
	}
	cc = malloc(sizeof(char) + k + 1);
	if (cc == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		cc[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		cc[j + k] = s2[j];
	}

	return (cc);
}
