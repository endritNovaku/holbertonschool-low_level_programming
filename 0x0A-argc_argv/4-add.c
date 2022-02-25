#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the sum
 * @argc: length of argv
 * @argv: array
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
			break;
		}
		sum += atoi(argv[i]);
	}

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		printf("%i\n", sum);
	}
	return (0);
}