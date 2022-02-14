#include "main.h"
/**
 * rev_string - rev a string
 * @s: string
 */

void rev_string(char *s)
{
	int i = 0;
	char tmp[457];

	while (s[i] != '\0')
	{
		tmp[i] = s[i];
		i++;
	}

	while (i >= 0)
	{
		s[i] = tmp[i];
		i--;
	}
}
