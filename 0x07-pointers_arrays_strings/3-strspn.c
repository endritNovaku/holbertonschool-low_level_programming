#include "main.h"
/**
 * _strspn - strspn function
 * @s: string
 * @accept: letters to allow
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int count = 0;
	int j;
	int k = 0;

	while (accept[k] != '\0')
	{
		k++;
	}

	while (s[i] != '\0')
	{
		for (j = k; j >= 0; j--)
		{
			if (j == 0)
			{
				if (accept[j] != s[i])
					break;
			}
			else if (s[i] == accept[j])
			{
				count++;
			}
		}
		i++;
	}

	return (count);

}
