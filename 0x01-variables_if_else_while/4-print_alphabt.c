#include <stdio.h>
/**
 * main - print the alphabet but do not include q and e
 * Return: Allways 0
 */

int main(void)
{
char alphabet[] = "abcdfghijklmnoprstuvwxyz\n";
int i;

for (i = 0; i < 25; i++)
{
putchar(alphabet[i]);
}

return (0);
}
