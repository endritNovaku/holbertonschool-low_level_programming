#include <stdio.h>
/**
 * main - print the alphabet but do not include q and e
 * Return: Allways 0
 */

int main(void)
{
char i[25];

for (i = "a"; i < "z"; i++)
{
if (i == "e" || i == "q") {
continue;
}
putchar(i);
}

return (0);
}
