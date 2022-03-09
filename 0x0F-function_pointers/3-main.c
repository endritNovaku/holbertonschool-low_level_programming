#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calculator
 * @argv: argv
 * @argc: argc
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);

	}

	if ((get_op_func(argv[2]) == NULL && *argv[1] != '\0') || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}


	printf("%i\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
