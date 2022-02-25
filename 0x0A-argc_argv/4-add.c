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
	int mul = 1;

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}

	if (argc < 2)
	{
		printf("0\n");
	}
	else if (argc > 2 && mul == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", mul);
	}
	return (0);
}
