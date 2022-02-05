#include <stdio.h>
/**
 * main - print all possible different combinations of 3 digits
 * Return: Allways 0
 */

int main() {

int i;
int j;
int k;
    
for (i = '0'; i < '9'; i++)
{
for (j = i; j < '9'; j++)
{
for (k = i; k <= '9'; k++)
{
if (i != j && i !=k)
{
if (j != i && j != k)
{
putchar(i);
putchar(j);
putchar(k);
if (i != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
