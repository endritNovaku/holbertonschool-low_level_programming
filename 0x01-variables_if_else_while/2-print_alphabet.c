#include <stdio.h>
#include <ctype.h>
/**
 * main - print the alhabet
 * Return: allways zero
 */

int main(void)
{
char i;


for (i = 'A'; i < 'Z'; ++i)
{
putchar(tolower(i));
}

putchar('\n');
return (0);
}
