#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concat 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: max length
 * Return: cc
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k = 0;
	char *cc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		k++;

	cc = malloc(sizeof(char) * (k + 1));

	if (cc == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		cc[i] = s1[i];
	for (i = 0; s2[i] != '\0' || i < n; i++)
		cc[i + k] = s2[i];

	return (cc);


}
