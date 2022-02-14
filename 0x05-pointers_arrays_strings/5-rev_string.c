#include "main.h"
/**
 * rev_string - rev a string
 * @s: string
 */

void rev_string(char *s)
{
	int j = 0;
	char tmp[467];

	while (s[j] != '\0')
	{
		tmp[j] = s[j];
		j++;
	}
	j--;

	while (j >= 0)
	{
		s[j] = tmp[j];
		j--;
	}
}
