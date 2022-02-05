#include <stdio.h>
/**
 * main - print all diffrent combinations of two digits
 * Return: Allways 0
 */

int main(void)
{
int i;
int j;
int a;
int b;

for (i = '0'; i < '9'; i++)
{
for (j = i; j <= '9'; j++)
{
if ( i != j)
{
putchar(i);
putchar(j);
}
if (i == '8')
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
