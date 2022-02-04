#include <stdio.h>
/**
 * main - conver decimals to hexdecimals
 * Return: Always 0
 */

int main(void)
{
int i;
int j;
char letters[] = "abcdef";

for (i = '0'; i <= '9'; i++)
{
putchar(i);
}

for (j = 10; j <= 15; j++)
{
putchar(letters[j - 10]);
}
putchar('\n');

return (0);
}
