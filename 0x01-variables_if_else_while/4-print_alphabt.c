#include <stdio.h>
#include <ctype.h>
/**
 * main - print the alphabet but do not include q and e
 * Return: Allways 0
 */

int main(void)
{
char i;

for (i = 'A'; i <= 'Z'; ++i)
{

if (i == 'E' || i == 'Q')
{
continue;
}
putchar(tolower(i));
}
putchar('\n');

return (0);
}
