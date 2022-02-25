#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: argv length
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
