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
	int i;
	int coin = 0;
	int sum = 0;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; arr[i] != '\0'; i++)
	{
		while (sum + arr[i] <= atoi(argv[1]))
		{
			sum += arr[i];
			coin++;
		}
	}
	printf("%i\n", coin);
	return (0);
}
