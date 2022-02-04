#include <stdio.h>
#include <ctype.h>
/**
 * main - print the alphabet in lowercase and then in uppercase
 * Return: Allways 0
 */

int main(void)
{
int i;
int j;
for (i = 'A'; i <= 'Z'; ++i)
{
putchar(tolower(i));
}

for (j = 'A'; j <= 'Z'; ++j)
{
putchar(j);
putchar('\n');
}

return (0);
}
