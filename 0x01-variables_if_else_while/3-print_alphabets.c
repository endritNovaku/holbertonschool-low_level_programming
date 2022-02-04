#include <stdio.h>
#include <ctype.h>
/**
 * main - print the alphabet in lowercase and then in uppercase
 * Return: Allways 0
 */

int main(void)
{
int i;

for (i = 'A'; i <= 'Z'; i++)
{
putchar(tolower(i));
putchar(i);
}
putchar('\n');

return (0);
}
