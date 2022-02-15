#include "main.h"
/**
 * _atoi - convert string to int
 * @s: string
 */

int _atoi(char *s)
{
	int i = 0;
	int res;

	while (s[i] != '\0')
	{
		if ((s[i] >= '0' && s[i] <= '9'))
		{
			if (s[i - 1] == '-')
			{
				putchar('-');
			}

			if ((s[i + 1] > '9') || (s[i + 1] < '0'))
			{
				putchar(s[i]);
				break;
			}
			res = s[i];
			putchar(res);
		}
		i++;
	}

	return (0);
}
