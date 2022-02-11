#include <stdio.h>
/**
 * main - print the largets prime number
 * Return: Allways 0
 */

int main(void)
{
	long number = 612852475143;
	int div = 2;
	long prime;

	while (number != 1)
	{
		if (number % div == 0)
		{
			number = number / div;
			prime = div;
		}
		div++;
	}

	printf("%ld\n", prime);
	return (0);
}
