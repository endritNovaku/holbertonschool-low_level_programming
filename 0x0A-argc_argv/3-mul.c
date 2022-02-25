#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - return mul of 2 numbers
 * @argc: argv length
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}

	return (0);
}
