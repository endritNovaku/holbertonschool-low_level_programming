#include <stdio.h>
/**
 * main - print all diffrent combinations of two digits
 * Return: Allways 0
 */

int main(void)
{
int i;
int j;

for (i = '0'; i <= '9'; i++)
{

for (j = '0'; j <= '9'; j++)
{

if ((i,j) > (j,i) && (i,j) != (j,i))
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
