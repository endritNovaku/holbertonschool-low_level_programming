#include <stdio.h>
#include <stdlib.h>
/**
 * main - min number of coin change
 * @argc: argv length
 * @argv: array
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int coin = 0;
	int sum = 0;
	int arr[] = {25, 10, 5, 2, 1};


	for (j = 0; argv[1][j] != '\0'; j++)
	{
		if (argv[1][j] < '0' || argv[1][j] > '9' || argc != 2)
		{
			printf("Error\n");
			return (1);
		}
	}

	for (i = 0; arr[i] != '\0'; i++)
	{
		while (sum + arr[i] <= atoi(argv[1]))
		{
			sum += arr[i];
			coin++;
		}
		if (sum == atoi(argv[1]))
		{
			break;
		}
	}
	printf("%i\n", coin);
	return (1);
}
