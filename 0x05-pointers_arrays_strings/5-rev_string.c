#include "main.h"
/**
 * rev_string - rev a string
 * @s: string
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	j--;

	while (i < j)
	{
		s[i] = s[j];
		s[j] = s[i];
		i++;
		j--;
	}
}
