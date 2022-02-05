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

for (i = '0'; i <= '9'; i++)
{

for (j = '0'; j <= '9'; j++)
{

a = (i,j);
b = (j,i);

if (a > b && a != b)
{

putchar(i);
putchar(j);

if (i != '8')
{
putchar(',');
putchar(' ');
}

}

}

}

putchar('\n');

return (0);
}
