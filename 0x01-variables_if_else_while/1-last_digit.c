#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - tells if the last digit is zero, greater the five or less then six
 * Return: Allways zero
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
last_digit = n % 10;
if (last_digit > 5)
{
	printf("Last digit of %i is %i and is greater then 5", n, last_digit);
}
else if (last_digit == 0)
{
	printf("Last digit of %i is %i and is 0", n, last_digit);
}
else if (last_digit < 6)
{
	printf("Last digit of %i is %i and is less then 6 and not 0", n, last_digit);
}

return (0);
}
