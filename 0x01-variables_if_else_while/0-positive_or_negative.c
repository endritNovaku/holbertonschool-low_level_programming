#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - returs if a number is positive or negative
 * Return: Allways zero
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n < 0)
{
printf("%i is negative", n);
}
else if (n > 0)
{
printf("%i is positive");
}
else
{
	printf("%i is zero", n);
}
return (0);
}
